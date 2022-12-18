#define trig D1
#define echo D2

void setup() {
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
//  Serial.print(",");
  Serial.println("CM");
  delay(10);
}
