#include "pidcontroller.hpp"
#include <iostream>

double PIDController::calculate(double error) {
  double output = 0.0;
  std::cout << kp*error << std::endl;
  std::cout << ki*integral(error) << std::endl;
  std::cout << kd*derivative(error) << std::endl;
  output = (kp*error) + (ki*integral(error)) + (kd*derivative(error));
  previous_error = error;
  return output;
}

double PIDController::integral(double error) {
  integral_ += error * dt;
  return integral_;
}

double PIDController::derivative(double error) {
  double derivative;
  derivative = (error - previous_error)/ dt;
  return derivative;
}
