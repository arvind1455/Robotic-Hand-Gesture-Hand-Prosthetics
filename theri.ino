
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
const int flexpin1 = A0;
const int flexpin2 = A1;
const int flexpin3 = A2;
const int flexpin4 = A3;
const int flexpin5 = A4;
const int flexpin6 = A5;
const int buttonPin = 9;     // the number of the pushbutton pin



int buttonState;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  pinMode(buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH)
  { int flexposition1;    // Input value from the analog pin.
    int servoposition1;   // Output value to the servo.
    flexposition1 = analogRead(flexpin1);
    servoposition1 = map(flexposition1, 285, 300, 0, 360);
    servoposition1 = constrain(servoposition1, 0, 360);
    servo1.write(servoposition1);
    Serial.print("sensor1: ");
    Serial.print(flexposition1);
    Serial.print("  servo1: ");
    Serial.println(servoposition1);
    delay(20);// wait 20ms between servo updates


    int flexposition2;    // Input value from the analog pin.
    int servoposition2;   // Output value to the servo.
    flexposition2 = analogRead(flexpin2);
    servoposition2 = map(flexposition2, 296, 309, 0, 360);
    servoposition2 = constrain(servoposition2, 0, 360);
    servo2.write(servoposition2);
    Serial.print("sensor2: ");
    Serial.print(flexposition2);
    Serial.print("  servo2: ");
    Serial.println(servoposition2);
    delay(20);  // wait 20ms between servo updates


    int flexposition3;    // Input value from the analog pin.
    int servoposition3;   // Output value to the servo.
    flexposition3 = analogRead(flexpin3);
    servoposition3 = map(flexposition3, 340, 400, 0, 360);
    servoposition3 = constrain(servoposition3, 0, 360);
    servo3.write(servoposition3);
    Serial.print("sensor3: ");
    Serial.print(flexposition3);
    Serial.print("  servo3: ");
    Serial.println(servoposition3);
    delay(20);  // wait 20ms between servo updates


    int flexposition4;    // Input value from the analog pin.
    int servoposition4;   // Output value to the servo.
    flexposition4 = analogRead(flexpin4);
    servoposition4 = map(flexposition4, 300, 309, 0, 360);
    servoposition4 = constrain(servoposition4, 0, 360);
    servo4.write(servoposition4);
    Serial.print("sensor4: ");
    Serial.print(flexposition4);
    Serial.print("  servo4: ");
    Serial.println(servoposition4);
    delay(20);  // wait 20ms between servo updates


    int flexposition5;    // Input value from the analog pin.
    int servoposition5;   // Output value to the servo.
    flexposition5 = analogRead(flexpin5);
    servoposition5 = map(flexposition5, 273, 305, 0, 360);
    servoposition5 = constrain(servoposition5, 0, 360);
    servo5.write(servoposition5);
    Serial.print("sensor5: ");
    Serial.print(flexposition5);
    Serial.print("  servo5: ");
    Serial.println(servoposition5);
    delay(20);  // wait 20ms between servo updates*/

    int flexposition6;    // Input value from the analog pin.
    int servoposition6;   // Output value to the servo.
    flexposition6 = analogRead(flexpin6);
    servoposition6 = map(flexposition6, 300, 440, 0, 360);
    servoposition6 = constrain(servoposition6, 0, 360);
    servo6.write(servoposition6);
    Serial.print("sensor6: ");
    Serial.print(flexposition6);
    Serial.print("  servo6: ");
    Serial.println(servoposition6);
    delay(20);

servo7.write(0);
  }
  if (buttonState == LOW)
  {
servo7.write(90);
  }
}
