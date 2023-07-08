// C++ code
//
void setup()
{
  Serial.begin(9600);
 
  pinMode(2, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000);
  
 
  digitalWrite(8,HIGH);
  delay(333.333); 
   digitalWrite(8, LOW);
  delay(333.333); 
  digitalWrite(8, HIGH);
     delay(333.333); 
digitalWrite(8,LOW);
  delay(333.333); 
  digitalWrite(8, HIGH);
  delay(333.333);
   digitalWrite(8,LOW);
  delay(333.333);
 
  digitalWrite(2, LOW);
  delay(1000); 
   
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000); 
  
}