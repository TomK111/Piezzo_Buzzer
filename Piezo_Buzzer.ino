#define buzzer 9
#define ButtonPin 7

void setup(){
  pinMode(ButtonPin, INPUT); 
}

void loop(){
  if(digitalRead(ButtonPin) == HIGH) {
    tone(buzzer, 1000);
  } else {
    noTone(buzzer);
  }  
}
