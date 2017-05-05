#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(9); 
  //myServo.write(0);
  //delay(0);
}

void loop() {

  //myServo.write(0);                       // ส่งค่าไปควบคุม servo เป็นมุมที่ต้องการในช่วง 0-179 องศา
  //delay(1000); 
  myServo.write(90);                       // ส่งค่าไปควบคุม servo เป็นมุมที่ต้องการในช่วง 0-179 องศา
  delay(500);
  myServo.write(0);                       // ส่งค่าไปควบคุม servo เป็นมุมที่ต้องการในช่วง 0-179 องศา
  delay(1000);                 

}
