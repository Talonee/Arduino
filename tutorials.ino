  
//////////////////// Project 4 ////////////////////


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