int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup()
{

  /* add setup code here */
	pinMode(led, OUTPUT);
}

void loop()
{

  /* add main program code here */
	analogWrite(led, brightness);

	brightness = brightness + fadeAmount;

	if (brightness == 0 || brightness == 255)
	{
		fadeAmount = -fadeAmount;
	}
	delay(30);
}
