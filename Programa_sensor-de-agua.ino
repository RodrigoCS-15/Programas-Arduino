// SENSO-DE-ÁGUA
//RODRIGO CS

int estadosensor;
int buzzer=10;
int led=9;



void setup() {
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
    estadosensor = analogRead(A1);
    Serial.println(estadosensor);
   delay(50); 
    
 if(estadosensor > 700){
    digitalWrite(10,HIGH);
  }else if(estadosensor < 699){
    digitalWrite(10,LOW);}

    if(estadosensor < 100){
    digitalWrite(9,HIGH);
  }else if(estadosensor > 101){
    digitalWrite(9,LOW);}
     
}
