int _putchar(int);
/**
* jack_bauer - Prints every minute of the day of Jack Bauer
*
* Return: nothing
*/
void jack_bauer(void)
{
	int i = 0;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0 ; j < 60; j++)
		{
			_putchar(0x30 + i / 10);
			_putchar(0x30 + i % 10);
			_putchar(':');
			_putchar(0x30 + j / 10);
			_putchar(0x30 + j % 10);
			_putchar(0x0A);
		}
	}
}
