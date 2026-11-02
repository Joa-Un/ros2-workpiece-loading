# Launch

### Publishing goals

```bash
source install/setup.bash
ros2 run goal_publishers goal_pose_publisher.py
```

### Gravity Compensated PD-controller

#### Terminal:

```bash
source install/setup.bash
ros2 launch workpiece_bringup gc_pd.launch.py
```

### Low-level joint velocity controller

#### Terminal:
```bash
source install/setup.bash
ros2 launch workpiece_bringup joint_velocity_controller.launch.py
```
### Low-level controller and both high-level controllers TODO BETTER TITLE

#### Terminal:
```bash
source install/setup.bash
ros2 launch workpiece_bringup kinematic_controller.launch.py
```

### To switch between high-level controllers

#### Terminal:
```bash
ros2 service call /controller_manager/switch_controller controller_manager_msgs/srv/SwitchController \
  "{activate_controllers: ['task_space_kinematic_controller'], deactivate_controllers: ['joint_space_kinematic_controller'], strictness: 1}"
```
```bash
ros2 service call /controller_manager/switch_controller controller_manager_msgs/srv/SwitchController \
  "{activate_controllers: ['joint_space_kinematic_controller'], deactivate_controllers: ['task_space_kinematic_controller'], strictness: 1}"
```