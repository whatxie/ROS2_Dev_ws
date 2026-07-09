# RDK X5 Robot Car 🤖

A ROS2 intelligent robot car project based on the D-Robotics RDK X5 development board. The RDK X5 is powered by the Xurong 5 intelligent computing chip, delivering up to 10 TOPS of edge-side AI performance, supporting complex algorithms like Transformers. With its Type-C streamlined development workflow, it significantly enhances capabilities in human-robot interaction, visual perception, and motion planning.

---

## 📦 Product Overview

The RDK X5 Robot Car is an open‑source mobile robot platform designed for ROS education, AI vision, and intelligent robotics development. With the RDK X5 as the core controller, it integrates depth cameras, TOF LiDAR, and mecanum wheels to enable functions such as mapping and navigation, obstacle avoidance, gesture control, and visual line following.

The chassis is made of white sand‑blasted aluminium alloy with a stacked internal structure. All cables are neatly routed for a clean and tidy appearance.

---

## 🚀 Key Features

### Powerful Compute
- **CPU**: 8‑core Arm® Cortex®‑A55 @ 1.5 GHz
- **BPU**: Equivalent 10 TOPS (Bayes‑architecture single‑core NPU)
- **GPU**: 32 GFLOPS graphics performance
- **Memory**: 4GB / 8GB LPDDR4

### Rich Interfaces
- **Camera**: 2 × 4‑lane MIPI CSI, seamlessly compatible with stereo vision algorithms
- **Display**: 1 × HDMI Type‑A (up to 1080p60) + 1 × MIPI DSI
- **USB**: 4 × USB 3.0 Type‑A + 1 × USB 2.0 Type‑C
- **Networking**: 1 × Gigabit Ethernet (RJ45, PoE‑capable) + Wi‑Fi 6 + Bluetooth 5.4
- **Others**: CAN FD, 40‑pin GPIO (multiplexed for UART/PWM/I2C/SPI), 3.5mm audio jack, microSD slot

### Easy Development
- **One‑Cable Development**: A single Type‑C cable handles system flashing, development, and debugging
- **OS Support**: Ubuntu 22.04
- **ROS Ecosystem**: Native ROS2 support, with standard ROS interfaces to call large‑model services
- **Large Model Support**: Deploy models from 40 million to 1.5 billion parameters on‑device (Llama, Bloom, MobileSAM, etc.)

---

## 🛠️ Hardware Specifications

| Category | Specification |
|----------|---------------|
| **Processor** | 8 × Arm® Cortex®‑A55 @ 1.5GHz |
| **BPU** | 1 × Bayes BPU, 10 TOPS (INT8) |
| **GPU** | 32 GFLOPS |
| **Memory** | 4GB / 8GB LPDDR4 |
| **Storage** | On‑board 1 Gbit NAND flash + microSD card slot |
| **Multimedia** | H.265/H.264 codec, up to 3840×2160@60fps |
| **Wireless** | Wi‑Fi 6 (IEEE 802.11ax) + Bluetooth 5.4 |
| **Power** | 5V / 5A DC, Type‑C connector |
| **Dimensions** | 100 mm × 80 mm |
| **Operating Temperature** | -20℃ ~ +61℃ |

---

## 📋 Interface Description

| Interface | Quantity | Description |
|-----------|----------|-------------|
| MIPI CSI | 2 × 4‑lane | Stereo / mono camera input |
| HDMI | 1 × Type‑A | Up to 1080p60 display output |
| MIPI DSI | 1 × 4‑lane | Up to 2560×1440@60 |
| USB 3.0 | 4 × Type‑A | Host ports |
| USB 2.0 | 1 × Type‑C | Device port / one‑cable flashing |
| Ethernet | 1 × RJ45 | Gigabit, PoE‑capable |
| CAN | 1 × CAN FD | High‑speed communication |
| Audio | 1 × 3.5mm | Stereo in/out |
| GPIO | 28 pins | Multiplexed: 5×UART / 8×PWM / 3×I2C / 2×SPI / 1×I2S |
| Debug UART | 1 × Micro USB | Serial debug console |
| TF Card Slot | 1 | Boot media |

---

## 🧩 Software Support

### Operating System
- Ubuntu 22.04

### ROS / AI Frameworks
- **ROS2**: Full support, providing standard robotics development interfaces
- **Model Zoo**: 200+ open‑source algorithms and applications covering image classification, object detection, semantic segmentation, NLP, and more
- **bpu_infer_lib**: Python inference interface for BPU, allowing direct deployment of D‑Robotics heterogeneous models on RDK X5
- **Large‑Model Gateway**: Natively integrated with Volcano Edge Intelligence, offering an out‑of‑the‑box gateway for large models

### Development Tools
- **RDK Studio**: One‑cable flashing and debugging tool
- **Jupyter Lab**: Interactive development environment with notebook‑style model validation
- **MobaXTerm**: Recommended remote login tool

---

## 📚 Quick Start

### 1. Prerequisites
- RDK X5 development board × 1
- Micro SD card (≥16GB, Class 10 or higher recommended)
- SD card reader × 1
- Type‑C data cable × 1 (supports both power and data)
- 5V/5A power adapter (PD 3.0 compliant)

### 2. System Flashing
Use RDK Studio or a card reader to write the Ubuntu 22.04 image to the SD card:
- **RDK Studio method**: Hold the BOOT button while powering on, then flash via the Type‑C one‑cable port
- **Card reader method**: Insert the SD card into the reader and write the image using a flashing tool

### 3. First Boot
1. Insert the flashed SD card into the slot on the back of the RDK X5
2. Connect the Type‑C power (Power port)
3. Wait about 50 seconds for the system to start
4. Connect a monitor via HDMI, or log in remotely using MobaXTerm
5. Execute the following commands:

```bash
# Start the chassis node:
ros2 launch origincar_base origincar_bringup.launch.py

# Start the host PC node:
ros2 launch rosbridge_server rosbridge_websocket_launch.xml

# Start model processing:
ros2 launch racing_obstacle_detection_yolo racing_obstacle_detection_yolo.launch.py

# Start large‑model person recognition node:
ros2 run image_upload_analyzer image_upload_analyzer

# Start motion control:
ros2 launch origincar_competition start.launch.py
```

---

## 🚗 Robot Car Assembly and Debugging

### Hardware Connections (Reference)
| Component | Recommended Model |
|-----------|-------------------|
| Chassis | TT motor + gearbox kit |
| Motor Driver | L298N dual H‑bridge module |
| Power | 18650 battery holder + voltage regulator |
| LiDAR | TOF LiDAR (optional) |
| Depth Camera | RDK Stereo Camera or stereo camera module |

### Wiring Points
1. Use PH2.0 connector cables to connect motors to the driver board outputs.
2. Connect driver board IN1‑IN4 to the corresponding RDK X5 GPIO pins (e.g., 12/13/18/19).
3. **Note**: The motor driver board requires an independent power supply (6‑12V); do not use the development board's USB power.

---

## 🌟 Application Scenarios

- **ROS2 Robotics Education**: Supported by the textbook *"ROS 2 Intelligent Robot Development Practice"*
- **AI Vision Applications**: YOLOv5 / YOLO World object detection, gesture recognition, human skeleton keypoint detection
- **SLAM and Navigation**: Cartographer laser SLAM, stereo depth estimation (<1% error within 10m)
- **On‑Device Large Model Deployment**: Llama, Bloom, MobileSAM (40M ~ 1.5B parameters)
- **Multimodal Interaction**: With the RDK X5 Magicbox, enabling natural "see, hear, speak, move" interactions

---

## 📖 References

- [D‑Robotics Official Website](https://d-robotics.cc)
- [RDK Developer Community](https://developer.d-robotics.cc)
- [RDK Official Documentation](https://d-robotics.github.io/rdk_doc)
- [RDK Model Zoo (GitHub)](https://github.com/D-Robotics/rdk_model_zoo)
- [RDK X5 ROS2 Robot Car Tutorial](https://blog.csdn.net/weixin_28738397/article/details/160815562)