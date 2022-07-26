void setup() 
{
  Serial.begin(9600);
  byte data = 65;

  Serial.print("With print:");
  Serial.println(data);

  Serial.print("With write:");
  Serial.write(data);

}

void loop() 
{

}
