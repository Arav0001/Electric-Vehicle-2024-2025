#include <Arduino.h>
#include <Wire.h>
#include <AS5600.h>
#include <Servo.h>

#include "constants.h"
#include "PID.h"

float TARGET_DISTANCE = 2.0f; // meters

volatile float current_speed = NEUTRAL;
uint8_t is_moving = false;

AS5600 encoder;
Servo esc;

PID pid(Kp, Ki, Kd, Ka);

void setup() {
  esc.attach(ESC_PIN);
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Wire.begin();
  encoder.begin();

  // if (encoder.isConnected() == false) {
  //   Serial.println("AS5600 not connected!");
  //   while (true) {
  //     digitalWrite(LED_BUILTIN, HIGH);
  //     delay(100);
  //     digitalWrite(LED_BUILTIN, LOW);
  //     delay(100);
  //   }
  // }

  esc.writeMicroseconds(FULL_THROTTLE);
  delay(2000);

  esc.writeMicroseconds(FULL_BRAKE);
  delay(2000);

  esc.writeMicroseconds(NEUTRAL);
  delay(2000);

  // while (digitalRead(BUTTON_PIN) == HIGH) {
  //   // Wait for button press to start
  // }

  // is_moving = true;
  // current_speed = NEUTRAL;
}

void loop() {
  // uint64_t pos = encoder.getMPosition();
  // Serial.println(pos);
}