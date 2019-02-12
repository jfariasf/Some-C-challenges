int _putchar(int);
/**
* times_table - Prints a 9 times table starting from 0
*
* Return: nothing
*/
void times_table(void)
{
	int i;
	int j;
	int res;
	int dgt;
	int first;

	for (i = 0; i < 10; i++)
	{
		first = 0;
		for (j = 0 ; j < 10; j++)
		{
			res = i * j;
			dgt = res / 10;
			if (first != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (!dgt)
					_putchar(' ');
			}
			if (!dgt)
				_putchar(0x30 + res);
			else
			{
				_putchar(0x30 + res / 10);
				_putchar(0x30 + res % 10);
			}
			first = 1;
		}
		_putchar(0X0A);
	}
}
