#include "pidcontroller.hpp"

#include <iostream>

double PIDController::Calculate(double error) {
  double output = 0.0;

  std::cout << kp_*error << std::endl;
  std::cout << ki_*Integral(error) << std::endl;
  std::cout << kd_*Derivative(error) << std::endl;

  output = (kp_*error) + (ki_*Integral(error)) + (kd_*Derivative(error));
  previous_error_ = error;
  return output;
}

double PIDController::Integral(double error) {
  integral_ += error * dt_;
  return integral_;
}

double PIDController::Derivative(double error) {
  double derivative;
  derivative = (error - previous_error_)/ dt_;
  return derivative;
}
