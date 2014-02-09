const int numLEDs = 3;
int blueLEDPin = 3;
int greenLEDPin = 4;
int redLEDPin = 5;
int ledPin[3];
int ledPinIndex = 0;

void setup()
{

  /* add setup code here */
	ledPin[0] = blueLEDPin;
	ledPin[1] = greenLEDPin;
	ledPin[2] = redLEDPin;
	for (int i = 0; i < numLEDs; i++)
	{
		pinMode(i, OUTPUT);
	}
}

void loop()
{

  /* add main program code here */
	digitalWrite(ledPin[ledPinIndex % numLEDs], HIGH);
	delay(2000);
	digitalWrite(ledPin[ledPinIndex % numLEDs], LOW);
	ledPinIndex++;
}
