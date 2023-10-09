#pragma once

#include <iostream>

/**
 * @brief Class for PID controller
 *
 */
class PIDController {
 public:
  /**
   * @brief Construct a new PIDController object
   *
   * @param kp Proportional gain
   * @param ki Integral gain
   * @param kd Derivative gain
   */
  PIDController(double kp, double ki, double kd) : kp(kp), ki(ki), kd(kd) {}

  /**
   * @brief Calculate the output of the PID controller
   *
   * @param error
   * @return double
   */
  double calculate(double error);

 private:
  double kp;
  double ki;
  double kd;

  /**
   * @brief Calculate the Integral term of the PID controller
   *
   * @param error
   * @return double
   */
  double integral(double error);

  /**
   * @brief Calculate the Derivative term of the PID controller
   *
   * @param error
   * @return double
   */
  double derivative(double error);

  double dt = 0.01;
  double previous_error = 0.0;
  double integral_ = 0.0;
};