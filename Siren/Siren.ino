
int passiveBuzzPin = 7;
int i = 0;
int numOfLoops = 0;
int noteDuration = 1000 / 8; //an eighth note
int pauseBetweenNotes = noteDuration * 0.2;

void setup()
{

  /* add setup code here */
	for (numOfLoops = 0; numOfLoops < 4; numOfLoops++)
	{
		for (i = 25; i < 120; i++)
		{
			tone(passiveBuzzPin, 20 * i, noteDuration);
			delay(pauseBetweenNotes);
		}
		for (i = 120; i >= 25; i--)
		{
			tone(passiveBuzzPin, 20 * i, noteDuration);
			delay(pauseBetweenNotes);
		}
	}
}

void loop()
{

  /* add main program code here */

}
 