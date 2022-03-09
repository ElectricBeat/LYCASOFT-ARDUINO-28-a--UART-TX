
byte byteRead;
int i;

void setup() 
{                
  Serial.begin(9600);
  Serial.println("SRI ELECTRONIC AND EMBEDDED SOLUTIONS\n");
}

void loop() 
{  
  Serial.println("SRI ELECTRONIC AND EMBEDDED SOLUTIONS");
  delay(1000);
  if (Serial.available())
  {
    byteRead= Serial.read();
   
    Serial.write(byteRead);
    if(byteRead == '\n')
    {
      Serial.print('\n');
    }  
  }
}
