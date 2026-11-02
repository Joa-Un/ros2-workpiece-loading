
Build and source:
cd ~/ros2_ws
colcon build --parallel-workers $(($(nproc)/2))
source install/setup.bash

launching the packages:
ros2 launch ex3 robot.launch.py

For switching between the trajectories in another terminal:
source install/setup.bash
ros2 run goal_publishers keyboard_node


Feedforward control:
ros2 param set /joint_controller use_feedforward true
ros2 param set /joint_controller use_feedforward false
