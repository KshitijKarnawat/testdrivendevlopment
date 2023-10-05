#include "pidcontroller.hpp"
#include <gtest/gtest.h>

TEST(pidcontroller, Test_Case_1) {
  PIDController controller(1.0, 2.0, 3.0);
  double error = 5.0;
  EXPECT_DOUBLE_EQ(controller.calculate(error), 5.0);
}
