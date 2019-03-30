// Variable declarations
int val; 
int ledpin=13; 
int pinLB = 12;     // define pin 12 
int pinLF = 3;     // define pin 3 
int pinRB = 13;    // define pin 13 
int pinRF = 11;    // define pin 11 

void setup() 
{ 
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT); 
  Serial.println("Ready");
  pinMode(pinLB,OUTPUT); // pin 12
  pinMode(pinLF,OUTPUT); // pin 3 (PWM)
  pinMode(pinRB,OUTPUT); // pin 13
  pinMode(pinRF,OUTPUT); // pin 11 (PWM) 
} 

//Function declarations
void forward()     // move forward
    { 
    digitalWrite(pinLB,LOW);    // right wheel moves forward
    digitalWrite(pinRB, LOW);  // left wheel moves forward
    analogWrite(pinLF,255);   
    analogWrite(pinRF,255);
    }
void stopp()         // stop
    {
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinRB,HIGH);
     analogWrite(pinLF,0);
     analogWrite(pinRF,0); 
    }
void right()        // turn right (single wheel)
    {
   digitalWrite(pinLB,HIGH);  // left wheel moves forward
   digitalWrite(pinRB,LOW); // right wheel moves backward
   analogWrite(pinLF, 255);
   analogWrite(pinRF,255);   
    }
void left()         // turn left (single wheel)
{
   digitalWrite(pinLB,LOW);  // left wheel moves forward
   digitalWrite(pinRB,HIGH); // right wheel moves backward
   analogWrite(pinLF, 255);
   analogWrite(pinRF,255);  
    }
  void back()          // move backward
    {digitalWrite(pinLB,HIGH);  // motor moves to left rear
     digitalWrite(pinRB,HIGH);  // motor moves to right rear
     analogWrite(pinLF,255);  
     analogWrite(pinRF,255);     
    }

/*   
    l = Left 
    r = Right 
    f = forward 
    b = backward
    s = stop
*/
void loop()
{ 
  val=Serial.read();
  if (val >= 0) {
    digitalWrite(ledpin,HIGH); 
    delay(50); 
    digitalWrite(ledpin,LOW); 
    delay(50);
    Serial.print (val);
    if(val=='f') {
      forward(); 
      Serial.println (" Forward");
    }
    if(val=='b') {
      back(); 
      Serial.println (" Backward");
    }
    if(val=='l') {
      left(); 
      Serial.println (" Left");
    }
    if(val=='r') {
      right(); 
      Serial.println (" Right");
    }
    if(val=='s') {
      stopp(); 
      Serial.println (" STOP");
    }
  }
}
