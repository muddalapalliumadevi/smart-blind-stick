#define trig 2
#define echo 3
#define motor 7
#define buzzer 8

void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(motor,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  
  duration=pulseIn(echo,HIGH);
  distance=(duration/5)/29.1;
  if(distance<70)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(motor,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(motor,LOW);
  }
 delay(2);
}  
   
    
    
    
    
    
    
    
    
    
    
    
    