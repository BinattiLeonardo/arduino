// C++ code
//
#include <Servo.h>

int i = 0;

int graus = 0;

int j = 0;

int k = 0;

int m = 0;

Servo servo_11;

void setup()
{
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  for (i = 0; i <= 90; i += 1) {
    servo_11.write(i);
    delay(15); // Wait for 15 millisecond(s)
  }
  for (i = 90; i <= 180; i += 1) {
    servo_11.write(i);
    delay(30); // Wait for 30 millisecond(s)
  }
  delay(1000); // Wait for 1000 millisecond(s)
  for (i = 180; i >= 90; i -= 1) {
    servo_11.write(i);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (i = 90; i >= 0; i -= 1) {
    servo_11.write(i);
    delay(15); // Wait for 15 millisecond(s)
  }
}
