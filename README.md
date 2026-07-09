# RDK X5 地瓜车 🤖

基于地瓜机器人 RDK X5 开发板的 ROS2 智能小车项目。RDK X5 搭载旭日 5 智能计算芯片，提供高达 10 TOPS 的端侧算力，支持 Transformer 等复杂算法，配合 Type-C 极简开发流程，可显著提升人机交互、视觉检测及运动规划等核心能力。

---

## 📦 产品概述

RDK X5 地瓜车是一款面向 ROS 教育、AI 视觉与智能机器人开发的开源小车平台。以 RDK X5 作为核心主控，整合深度相机、TOF 激光雷达与麦克纳姆轮等硬件，可实现地图构建导航、智能避障、手势控制、视觉巡线等多种功能。

整车采用白色喷砂铝合金材质，内部为堆叠式结构，所有连接线缆巧妙收纳，整体美观整洁。

---

## 🚀 核心特性

### 超强算力
- **CPU**：8 核 Arm® Cortex®-A55 @ 1.5 GHz
- **BPU**：等效 10 TOPS 算力（贝叶斯架构单核 NPU）
- **GPU**：32 GFLOPS 图形算力
- **内存**：4GB / 8GB LPDDR4

### 丰富接口
- **相机**：2 × 4-lane MIPI CSI，支持双目算法无缝兼容
- **显示**：1 × HDMI Type-A（最高 1080p60）+ 1 × MIPI DSI
- **USB**：4 × USB 3.0 Type-A + 1 × USB 2.0 Type-C
- **网络**：1 × 千兆以太网（RJ45，支持 PoE）+ Wi-Fi 6 + 蓝牙 5.4
- **其他**：CAN FD、40PIN GPIO（复用支持 UART/PWM/I2C/SPI）、3.5mm 音频接口、TF 卡槽

### 易用开发
- **闪连开发**：一根 Type-C 线实现从系统烧录到开发调试的全流程体验
- **系统支持**：Ubuntu 22.04
- **ROS 生态**：原生适配 ROS2，支持通过标准化 ROS 接口调用大模型服务
- **大模型支持**：支持从 0.4 亿到 15 亿参数大模型的端侧部署（Llama、Bloom、MobileSAM 等）

---

## 🛠️ 硬件规格

| 类别 | 规格 |
|------|------|
| **处理器** | 8 × Arm® Cortex®-A55 @ 1.5GHz |
| **BPU** | 1 × Bayes BPU，10 TOPS (INT8) |
| **GPU** | 32 GFLOPS |
| **内存** | 4GB / 8GB LPDDR4 |
| **存储** | 板载 1 Gbit NAND 闪存 + microSD 卡插槽 |
| **多媒体** | H.265/H.264 编解码，最高 3840×2160@60fps |
| **无线** | Wi-Fi 6（IEEE 802.11ax）+ 蓝牙 5.4 |
| **电源** | 5V / 5A DC，Type-C 接口 |
| **尺寸** | 100 mm × 80 mm |
| **工作温度** | -20℃ ~ +61℃ |

---

## 📋 接口说明

| 接口 | 数量 | 说明 |
|------|------|------|
| MIPI CSI | 2 × 4-lane | 双目/单目相机输入 |
| HDMI | 1 × Type-A | 最高 1080p60 显示输出 |
| MIPI DSI | 1 × 4-lane | 最高 2560×1440@60 |
| USB 3.0 | 4 × Type-A | 主机接口 |
| USB 2.0 | 1 × Type-C | 设备接口 / 闪连 |
| 以太网 | 1 × RJ45 | 千兆，支持 PoE |
| CAN | 1 × CAN FD | 高速通信接口 |
| 音频 | 1 × 3.5mm | 立体声输入/输出 |
| GPIO | 28 路 | 复用 5×UART / 8×PWM / 3×I2C / 2×SPI / 1×I2S |
| Debug UART | 1 × Micro USB | 串口调试 |
| TF 卡槽 | 1 | 系统启动介质 |

---

## 🧩 软件支持

### 操作系统
- Ubuntu 22.04

### ROS / AI 框架
- **ROS2**：完整支持，提供标准化机器人开发接口
- **Model Zoo**：200+ 开源算法和应用程序，涵盖图像分类、目标检测、语义分割、NLP 等领域
- **bpu_infer_lib**：BPU 推理 Python 接口，支持直接在 RDK X5 上部署地瓜异构模型
- **大模型网关**：与火山引擎边缘智能全面适配，原生集成大模型网关入口

### 开发工具
- **RDK Studio**：闪连开发工具，一键烧录与调试
- **Jupyter Lab**：交互式开发环境，支持 Notebook 形式的模型验证
- **MobaXTerm**：推荐远程登录工具

---

## 📚 快速开始

### 1. 准备工作
- RDK X5 开发板 × 1
- Micro SD 卡（≥16GB，推荐 Class 10 以上）
- SD 卡读卡器 × 1
- Type-C 数据线 × 1（支持供电与数据传输）
- 5V/5A 电源适配器（支持 PD 3.0 协议）

### 2. 系统烧录
使用 RDK Studio 或读卡器将 Ubuntu 22.04 镜像烧录至 SD 卡：
- **RDK Studio 方式**：按住 BOOT 按钮上电，通过 Type-C 闪连口烧录
- **读卡器方式**：将 SD 卡插入读卡器，使用烧录工具写入镜像

### 3. 首次启动
1. 将烧录好的 SD 卡插入 RDK X5 背面的卡槽
2. 接通 Type-C 电源（Power 口）
3. 等待约 50 秒系统启动完成
4. 通过 HDMI 连接显示器，或使用 MobaXTerm 远程登录
5. 输入以下命令
```bash
底盘节点启动：
ros2 launch origincar_base origincar_bringup.launch.py

上位机节点启动：
ros2 launch rosbridge_server rosbridge_websocket_launch.xml

开启模型处理：
ros2 launch racing_obstacle_detection_yolo racing_obstacle_detection_yolo.launch.py

大模型人像识别节点：
ros2 run image_upload_analyzer image_upload_analyzer

开启运动控制
ros2 launch origincar_competition start.launch.py
```


---

## 🚗 地瓜车组装与调试

### 硬件连接（参考方案）
| 组件 | 推荐型号 | 
|------|----------|
| 底盘 | TT 马达 + 减速箱套件 |
| 电机驱动 | L298N 双 H 桥模块 |
| 电源 | 18650 电池盒 + 稳压模块 |
| 激光雷达 | TOF 激光雷达（选配） |
| 深度相机 | RDK Stereo Camera 或双目相机模组 |



### 接线要点
1. 使用 PH2.0 端子线连接马达与驱动板输出端
2. 驱动板 IN1-IN4 对应连接 RDK X5 GPIO（如 12/13/18/19）
3. **注意**：电机驱动板需独立供电（6-12V），不可使用开发板 USB 供电

---

## 🌟 应用场景

- **ROS2 机器人教育**：配套教材《ROS 2 智能机器人开发实践》
- **AI 视觉应用**：YOLOv5 / YOLO World 物体识别、手势识别、人体骨骼关键点检测
- **SLAM 与导航**：Cartographer 激光 SLAM、双目深度估计（10 米内测距误差 < 1%）
- **大模型端侧部署**：Llama、Bloom、MobileSAM 等 0.4 亿 ~ 15 亿参数模型
- **多模态交互**：配合 RDK X5 Magicbox 实现 "看、听、说、动" 的自然交互

---

## 📖 参考资料

- [地瓜机器人官网](https://d-robotics.cc)
- [RDK 开发者社区](https://developer.d-robotics.cc)
- [RDK 官方文档](https://d-robotics.github.io/rdk_doc)
- [RDK Model Zoo (GitHub)](https://github.com/D-Robotics/rdk_model_zoo)
- [RDK X5 保姆级 ROS2 小车教程](https://blog.csdn.net/weixin_28738397/article/details/160815562)

---
