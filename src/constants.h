#pragma once

#include <Arduino.h>

const float WHEEL_DIAMETER = 2.875f; // inches
const float WHEEL_CIRCUMFERENCE = WHEEL_DIAMETER * 3.14159f; // inches

#define ESC_PIN 9
#define BUTTON_PIN 7

const uint32_t FULL_THROTTLE = 2000;
const uint32_t FULL_BRAKE = 1000;
const uint32_t NEUTRAL = 1500;
const uint32_t ACCEL_INC = 10;

const float DECEL_BUFFER = 1.2f; // meters

const float Kp = 0.5f; // Proportional gain
const float Ki = 0.0f; // Integral gain
const float Kd = 0.05f; // Derivative gain
const float Ka = 0.01f; // Low pass filter gain