#include <LiquidCrystal.h>

#define ledR 8
#define ledV 7

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensor;
float temperatura;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.print("Temp. Actual:");
  
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A0);
  temperatura = ((sensor * 500.0) / 1023);

  if (temperatura < 10) {
    digitalWrite(ledV, HIGH);
    digitalWrite(ledR, LOW);
  } else {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledV, LOW);
  }

  lcd.setCursor(0, 1);
  lcd.print(temperatura);
  lcd.print(" C      ");

  Serial.print(temperatura);
  Serial.println("\n");
  delay(1000);
}
