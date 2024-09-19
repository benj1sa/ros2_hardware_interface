#include <gtest/gtest.h>
#include "pluginlib/class_loader.hpp"
#include "rmd_motor_hardware_interface.hpp"

TEST(RmdMotorHardwareInterfaceTest, LoadHardwareInterface) {
  pluginlib::ClassLoader<hardware_interface::SystemInterface> loader("hardware_interface", "rmd_motor_hardware::RmdMotorHardwareInterface");
  ASSERT_NO_THROW(loader.createUniqueInstance("rmd_motor_hardware/RmdMotorHardwareInterface"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
