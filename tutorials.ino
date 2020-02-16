//////////////////// Project 7 ////////////////////

 

//////////////////// Project 6 ////////////////////
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  while (millis() < 5000) {
    sensorValue = analogRead(A0);
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
  }
  digitalWrite(ledPin, LOW);
}

void loop() {
  snesorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);
  tone(8, pitch, 20);
  delay(10);
}


//////////////////// Project 5 ////////////////////
// #include <Servo.h>

// Servo myServo;

// const int potPin = A0;
// int potVal;
// int angle;

// void setup() {
//   myServo.attach(9);
//   Serial.begin(9600);
// }

// void loop() {
//   potVal = analogRead(potPin);
//   Serial.print("potVal: ");
//   Serial.print(potVal);
//   angle = map(potVal, 0, 1023, 0, 179);
//   Serial.print(", angle: ");
//   Serial.println(angle);
//   myServo.write(angle);
//   delay(15);
// }

//////////////////// Project 4 ////////////////////
  // const int redSensorPin = A0;
  // const int greenSensorPin = A1;
  // const int blueSensorPin = A2;

  // const int redLEDPin = 11;
  // const int greenLEDPin = 9;
  // const int blueLEDPin = 10;

  // int redValue = 0;
  // int greenValue = 0;
  // int blueValue = 0;

  // int redSensorValue = 0;
  // int greenSensorValue = 0;
  // int blueSensorValue = 0;

  // void setup() {
  //   Serial.begin(9600);

  //   pinMode(redLEDPin, OUTPUT);
  //   pinMode(greenLEDPin, OUTPUT);
  //   pinMode(blueLEDPin, OUTPUT);
  // }

  // void loop() {
  //   redSensorValue = analogRead(redSensorPin);
  //   delay(5);
  //   greenSensorValue = analogRead(greenSensorPin);
  //   delay(5);
  //   blueSensorValue = analogRead(blueSensorPin);
  //   delay(5);

  //   Serial.print("Raw sensor values\t Red: ");
  //   Serial.print(redSensorValue);
  //   Serial.print("\t Green: ");
  //   Serial.print(greenSensorValue);
  //   Serial.print("\t Blue: ");
  //   Serial.println(blueSensorValue);

  //   redValue = redSensorValue / 4;
  //   greenValue = greenSensorValue / 4;
  //   blueValue = blueSensorValue / 4;

  //   Serial.print("Mapped sensor values\t Red: ");
  //   Serial.print(redValue);
  //   Serial.print("\t Green: ");
  //   Serial.print(greenValue);
  //   Serial.print("\t Blue: ");
  //   Serial.println(blueValue);

  //   analogWrite(redLEDPin, redValue);
  //   analogWrite(greenLEDPin, greenValue);
  //   analogWrite(blueLEDPin, blueValue);

  //   Serial.println();
  // }

//////////////////// Project 3 ////////////////////
  // const int sensorPin = A0;
  // const float baselineTemp = 20.0;

  // void setup() {
  //     Serial.begin(9600);
  //     for (int pinNum = 5; pinNum <= 7; pinNum++) {
  //         pinMode(pinNum, OUTPUT);
  //         digitalWrite(pinNum, LOW);
  //     }


  // }

  // void loop() {
  //     int sensorVal = analogRead(sensorPin);
  //     Serial.print("Sensor value: ");
  //     Serial.print(sensorVal);

  //     float voltage = (sensorVal / 1024.0) * 5.0;
  //     Serial.print(", Volts: ");
  //     Serial.print(voltage);

  //     float temperature = (voltage - 0.5) * 100;
  //     Serial.print(", degree C: ");
  //     Serial.println(temperature);



  //     if (temperature < baselineTemp + 2) {
  //         // for (int pinNum = 5; pinNum <= 7; pinNum++) {
  //         //     digitalWrite(pinNum, LOW)
  //         // }
  //         digitalWrite(5, HIGH);
  //         digitalWrite(6, LOW);
  //         digitalWrite(7, LOW);
  //     } else if (temperature >= baselineTemp + 2 && temperature < baselineTemp + 4) {
  //         digitalWrite(5, HIGH);
  //         digitalWrite(6, LOW);
  //         digitalWrite(7, LOW);
  //     } else if (temperature >= baselineTemp + 4 && temperature < baselineTemp + 6) {
  //         digitalWrite(5, HIGH);
  //         digitalWrite(6, HIGH);
  //         digitalWrite(7, LOW);
  //     } else if (temperature >= 6) {
  //         // for (int pinNum = 5; pinNum <= 7; pinNum++) {
  //         //     digitalWrite(pinNum, HIGH);
  //         // }
  //         digitalWrite(5, HIGH);
  //         digitalWrite(6, HIGH);
  //         digitalWrite(7, HIGH);
  //     }
  //     delay(100);
  // }

//////////////////// Project 2 ////////////////////
  /*
  // 

  void setup() {
    pinMode(2, INPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
  }

  int switchState = 0;

  void loop() {
    // put your main code here, to run repeatedly:
    switchState = digitalRead(2);
    if (switchState == LOW) {
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    } else {
      digitalWrite(5, LOW);
      int a = 0;
      while (a < 10) {
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        delay(250);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        delay(1050);
        a++;
      } 
    }
  }
  */
