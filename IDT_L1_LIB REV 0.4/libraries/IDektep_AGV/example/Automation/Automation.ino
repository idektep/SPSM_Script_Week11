#define MR_IN1 12 //motor1
#define MR_IN2 13 //motor1
#define MR_IN3 32 //motor2
#define MR_IN4 33 //motor2

#define ML_IN1 27 //motor4
#define ML_IN2 14 //motor4
#define ML_IN3 25 //motor3
#define ML_IN4 26 //motor3

#define R_ENA 15  //Adjust speed  //motor1
#define R_ENB 2   //Adjust speed //motor2
#define L_ENA 19  //Adjust speed //motor4
#define L_ENB 4   //Adjust speed //motor3

#define L_LED 16  // ESP32 pin
#define R_LED 17  // ESP32 pin

#define TRIG 5   // Trig pin pin5
#define ECHO 35  // Echo pin pin35

long microsecondsToCentimeters(long microseconds)  // function การแปลงหน่วยให้เป็น เซนติเมตร
{
  return microseconds / 29 / 2;  // การแปลงหน่วยที่อ่านได้ ให้เป็นเซนติเมตร
}


void setup() {

  Serial.begin(112500);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(L_ENA, OUTPUT);
  pinMode(L_ENB, OUTPUT);
  pinMode(R_ENA, OUTPUT);
  pinMode(R_ENB, OUTPUT);

  pinMode(ML_IN1, OUTPUT);
  pinMode(ML_IN2, OUTPUT);
  pinMode(ML_IN3, OUTPUT);
  pinMode(ML_IN4, OUTPUT);
  pinMode(MR_IN1, OUTPUT);
  pinMode(MR_IN2, OUTPUT);
  pinMode(MR_IN3, OUTPUT);
  pinMode(MR_IN4, OUTPUT);

  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);
}

void loop() {

  checkDistance();
}

void checkDistance() {
  while (1) {
    long duration, distance;
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(5);
    digitalWrite(TRIG, LOW);
    duration = pulseIn(ECHO, HIGH);
    distance = microsecondsToCentimeters(duration);

    Serial.print("distance =  ");  // กำหนดชื่อ
    Serial.println(distance);      // ให้แสดงค่าที่ อ่านได้
    delay(10);
    forward();
    
    if (distance <= 30 && distance != 0) {
      stop();
      delay(500);
      turn_left();
      delay(200);
      break;
    }
  }
}

