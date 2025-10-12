const int led=2;
const int buzzer=9;
const int ldr=A0;
int val=50;

void setup() {
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(ldr,INPUT);// put your setup code here, to run once:

}

void loop() {
 val=analogRead(ldr);
if (val>=963) {
  tone(buzzer,400 );
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
 
}  
 else{ 
  digitalWrite(led,LOW);
 noTone(buzzer);
 }

}
