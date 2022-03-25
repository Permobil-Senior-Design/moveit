#include <ros/ros.h>

#include <dynamic_reconfigure/server.h>
#include <moveit_servo/ServoDynamicParameterConfig.h>
#include <moveit_servo/servo.h>

void dynParamCallback(moveit_servo::ServoDynamicParameterConfig &config, uint32_t level) {
  ROS_INFO("Reconfigure Request: %d", config.linear);

  //parameters_.linear_scale = config.linear

}

int main(int argc, char **argv) {
  ros::init(argc, argv, "moveit_servo_dyn_param");

  dynamic_reconfigure::Server<moveit_servo::ServoDynamicParameterConfig> server(ros::NodeHandle("servo_server/scale"));
  dynamic_reconfigure::Server<moveit_servo::ServoDynamicParameterConfig>::CallbackType f;

  f = boost::bind(&dynParamCallback, _1, _2);
  server.setCallback(f);

  ROS_INFO("Spinning node");
  ros::spin();
  return 0;
}