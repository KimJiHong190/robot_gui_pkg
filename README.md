# Robot Control GUI

## Overview

This GUI is a simplified version of the interface used to test our ROS2-based robots. It facilitates easy setup for complex robots as well as conducting simple experiments. The GUI is designed to publish specific topics that your robot's control code can interpret to perform various manipulations. 

Please note that this repository doesn't delve into each function within the UI, as they are specifically tailored to the robot used during development. However, you can easily modify these for your own purposes. The primary functionality revolves around publishing specific topics.

![GUI Overview](gif-link-here)  
*Add your gif links in place of "gif-link-here"*

## Installation

To install and set up your environment to use this GUI, follow these steps:

```bash
cd robot_gui_pkg

'''bash
colcon build

'''bash
source instll/setup.bash

'''bash
ros2 run ros2_gui run_ui
