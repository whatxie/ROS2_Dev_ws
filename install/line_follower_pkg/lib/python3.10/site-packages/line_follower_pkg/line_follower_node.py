import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge
import cv2
import numpy as np
import time

class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower_node')

        self.camera_topic = '/image'
        self.cmd_vel_topic = '/cmd_vel'
        self.linear_speed = 0.2
        self.max_angular_speed = 1.0
        self.kp = 0.005 


        self.target_fps = 15.0 
        self.process_interval = 1.0 / self.target_fps
        self.last_process_time = 0

        self.bridge = CvBridge()
        
        self.subscription = self.create_subscription(
            CompressedImage,
            self.camera_topic,
            self.image_callback,
            10)
            
        self.publisher = self.create_publisher(Twist, self.cmd_vel_topic, 10)
        
        self.get_logger().info(f'巡线节点已启动，目标帧率限制为: {self.target_fps} FPS')

    def image_callback(self, msg):
        current_time = time.time()
        if (current_time - self.last_process_time) < self.process_interval:
            return

        self.last_process_time = current_time

        try:
            cv_image = self.bridge.compressed_imgmsg_to_cv2(msg, "bgr8")
        except Exception as e:
            self.get_logger().error(f'CV Bridge Error: {e}')
            return

        height, width, _ = cv_image.shape
        
        crop_img = cv_image[int(height/1.5):height][1:width]
        
        gray = cv2.cvtColor(crop_img, cv2.COLOR_BGR2GRAY)
        blur = cv2.GaussianBlur(gray, (5, 5), 0)
        
        _, thresh = cv2.threshold(blur, 60, 255, cv2.THRESH_BINARY_INV)

        M = cv2.moments(thresh)
        
        twist = Twist()

        if M['m00'] > 0:
            cx = int(M['m10'] / M['m00'])
            mid_x = width // 2
            error = mid_x - cx
            
            angular_z = float(error) * self.kp
            angular_z = max(min(angular_z, self.max_angular_speed), -self.max_angular_speed)

            twist.linear.x = self.linear_speed
            twist.angular.z = angular_z
        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        self.publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = LineFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        stop_twist = Twist()
        node.publisher.publish(stop_twist)
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()