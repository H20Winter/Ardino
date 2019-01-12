int LED = 13;
int LOAD = 12;
int LEAD = 11;

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(LOAD,OUTPUT);
  pinMode(LEAD,OUTPUT);

  
}

void loop() {  
  while(LED < 100) {
    digitalWrite(LED,LOW);
    delay(912);
    digitalWrite(LED,HIGH);
    delay(912);
    digitalWrite(LOAD,LOW);
    delay(986);
    digitalWrite(LOAD,HIGH);
    delay(982);
    digitalWrite(LEAD,LOW);
    delay(980);
    digitalWrite(LEAD,HIGH);
    delay(983);
  }
   
}
