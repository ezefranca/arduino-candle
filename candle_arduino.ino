/* 
****** Arduino Candle ********
*/

int ledOne = 10, ledTwo = 9, ledThree = 11;

void setup()
{
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
}

void loop() 
{
  flickering();
}

void flickering() 
{
  analogWrite(ledOne, random(135)+120);
  analogWrite(ledTwo, random(135)+120);
  analogWrite(ledThree, random(135)+120);
  delay(random(100));
}
