#include <Servo.h>

Servo servoX;  // Servo for X-axis control
Servo servoY;  // Servo for Y-axis control

const int joystickX = A0;  // Joystick X-axis pin
const int joystickY = A1;  // Joystick Y-axis pin
const int servoXPin = 9;   // Servo X control pin
const int servoYPin = 10;  // Servo Y control pin

void setup() {
  // Attach the servos to pins
  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
}

void loop() {
  // Read joystick positions (ranges from 0 to 1023)
  int posX = analogRead(joystickX);
  int posY = analogRead(joystickY);

  // Map joystick position to servo angle (0 to 180 degrees)
  int angleX = map(posX, 0, 1023, 0, 180);
  int angleY = map(posY, 0, 1023, 0, 180);

  // Move servos to the mapped angle
  servoX.write(angleX);
  servoY.write(angleY);

  delay(15);  // Small delay for smooth movement
}
