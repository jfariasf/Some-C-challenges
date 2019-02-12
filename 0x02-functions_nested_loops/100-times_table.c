int _putchar(int);
/**
* print_times_table - prints a N times table
* @n: size of the table
* Return: nothing
*/
void print_times_table(int n)
{
	int i;
	int j;
	int res;
	int first;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		first = 0;
		for (j = 0 ; j <= n; j++)
		{
			if (first)
			{
				_putchar(',');
			}
			res = i * j;
			if (res >= 100)
			{
				_putchar(' ');
				_putchar(0x30 + res / 100);
				_putchar(0x30 + (res % 100) / 10);
				_putchar(0x30 + res % 10);
			}
			else if (res >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(0x30 + res / 10);
				_putchar(0x30 + res % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(0x30 + res);
			}
			first = 1;
		}
		_putchar(0X0A);
	}
}
