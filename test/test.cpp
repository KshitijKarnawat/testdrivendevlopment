#include <gtest/gtest.h>

#include "pidcontroller.hpp"

TEST(pidcontroller, Test_Case_1) {
  PIDController controller(1.0, 2.0, 3.0);
  double error = 5.0;
  EXPECT_NEAR(controller.calculate(error), 0.0, 0.01);
}

TEST(pidcontroller, Test_Case_2) {
  PIDController controller(-0.2, 5.2, 0.0);
  double error = 2.0;
  EXPECT_NEAR(controller.calculate(error), 0.0, 0.01);
}