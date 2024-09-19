#ifndef RMD_MOTOR_HARDWARE_INTERFACE_HPP_
#define RMD_MOTOR_HARDWARE_INTERFACE_HPP_

#include "hardware_interface/system_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

namespace rmd_motor_hardware {

class RmdMotorHardwareInterface : public hardware_interface::SystemInterface {
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(RmdMotorHardwareInterface)

  // Lifecycle methods
  hardware_interface::return_type on_init(const hardware_interface::HardwareInfo& info) override;
  hardware_interface::return_type on_configure(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::return_type on_activate(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::return_type on_deactivate(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::return_type on_cleanup(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::return_type on_shutdown(const rclcpp_lifecycle::State& previous_state) override;
  hardware_interface::return_type on_error(const rclcpp_lifecycle::State& previous_state) override;

  // Command and state interface export
  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  // Read and Write methods
  hardware_interface::return_type read() override;
  hardware_interface::return_type write() override;
};

}  // namespace rmd_motor_hardware

#endif  // RMD_MOTOR_HARDWARE_INTERFACE_HPP_
