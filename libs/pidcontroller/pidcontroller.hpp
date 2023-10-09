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
  PIDController(double kp, double ki, double kd) : kp_(kp), ki_(ki), kd_(kd) {}

  /**
   * @brief Calculate the output of the PID controller
   *
   * @param error
   * @return double
   */
  double Calculate(double error);

 private:
  double kp_;
  double ki_;
  double kd_;

  /**
   * @brief Calculate the Integral term of the PID controller
   *
   * @param error
   * @return double
   */
  double Integral(double error);

  /**
   * @brief Calculate the Derivative term of the PID controller
   *
   * @param error
   * @return double
   */
  double Derivative(double error);

  double dt_ = 0.01;
  double previous_error_ = 0.0;
  double integral_ = 0.0;
};