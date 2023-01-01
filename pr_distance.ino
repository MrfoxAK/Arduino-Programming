#include <LiquidCrystal_I2C.h>
#define trig D7
#define echo D8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init(); // initialize the lcd
  lcd.backlight();
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = (duration/2)/29.1;
  Serial.print(distance);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("distance: ");
  lcd.setCursor(2, 1);
  lcd.print(distance);
//  Serial.print(",");
  Serial.println("CM");
  delay(1000);
}
