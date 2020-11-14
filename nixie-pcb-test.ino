const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinEN = 8;

int valueA;
int valueB;
int valueC;
int valueD;

void setup() {
  //Serial.begin(9600);

  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  
  pinMode(pinEN, OUTPUT);
}

void loop() {
  
  for (int i = 0; i < 10; i++)
  {
    valueA = bitRead(i, 0);
    valueB = bitRead(i, 1);
    valueC = bitRead(i, 2);
    valueD = bitRead(i, 3);

    digitalWrite(pinA, valueA);
    digitalWrite(pinB, valueB);
    digitalWrite(pinC, valueC);
    digitalWrite(pinD, valueD);

    digitalWrite(pinEN, HIGH);

    /*
    Serial.print(i);
    Serial.print(" = ");
    Serial.print(valueD);
    Serial.print(valueC);
    Serial.print(valueB);
    Serial.println(valueA);
    */
    
    delay(1000);
    
    digitalWrite(pinEN, LOW);
    delay(1000);
  }
}
