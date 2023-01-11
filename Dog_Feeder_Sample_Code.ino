#include <Stepper.h>

#define STEPS 2038

Stepper stepper(STEPS, 8, 10, 9, 11);

int value;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);
  if (value <= 300) {
    stepper.setSpeed(9);
    stepper.step(-2038);
  }
  else {
    delay(1000);
  }
}
