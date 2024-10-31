// Programa: Controlando um servo motor com Arduino (servo motor arduino code) 
 
#include <Servo.h> 
 
Servo meuServo;
int pos; 
 
void setup() {
    meuServo.attach(6); 
    meuServo.write(0); 
}
 
void loop() {
    for (pos = 0; pos < 360; pos++) {
        meuServo.write(pos); 
        delay(5);
    }
    delay(50);
 
    for (pos = 360; pos >= 0; pos--) {
        meuServo.write(pos); 
        delay(5);
    }
    delay(50);
}