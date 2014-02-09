int ledPin = 8;
void setup()
{

  /* add setup code here */
	pinMode(ledPin, OUTPUT);
}

void loop()
{

  /* add main program code here */
	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(1000);
}
