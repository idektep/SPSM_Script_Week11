void forward() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void backward() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void slide_left() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void slide_right() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void slide_left_front() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void slide_right_front() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void slide_left_back() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void slide_right_back() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void turn_left() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void turn_right() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void stop() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}