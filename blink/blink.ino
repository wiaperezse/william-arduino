void setup() {
pinMode(13,OUTPUT );
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
// Metodo de parpadeo

 void parpadeo(int time){
  digitalWrite(13,HIGH);
  delay(time);
  digitalWrite(13,LOW);
  delay(time);
  }
  
