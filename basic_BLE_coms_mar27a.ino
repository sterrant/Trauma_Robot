int val; 
int ledpin=13; 
void setup() 
{ 
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT); 
  Serial.println("Ready");
} 
void loop()
{ 
  val=Serial.read();
  if (val >= 0) {
    digitalWrite(ledpin,HIGH); 
    delay(50); 
    digitalWrite(ledpin,LOW); 
    delay(50);
    Serial.println (val);
    
    
  }
  
  
}
