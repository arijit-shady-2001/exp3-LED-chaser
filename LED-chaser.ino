int i;
void setup()
{
for(i=5;i<=8;i++)
 pinMode(i,OUTPUT);  
 
}

  void loop()
  {
  for(i=5;i<=8;i++)
  {
    if(i!=8)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    }
    else
    {
     digitalWrite(i,HIGH);
    digitalWrite(i-3,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(i-3,LOW);
    } 
  }
  }
