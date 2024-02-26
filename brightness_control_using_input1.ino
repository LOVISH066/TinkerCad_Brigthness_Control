int b;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter a number between 0 and 255:");
  while (Serial.available() ==0) {}
  b=Serial.parseInt();
  
}

void loop()
{
  analogWrite(3,b);
}
