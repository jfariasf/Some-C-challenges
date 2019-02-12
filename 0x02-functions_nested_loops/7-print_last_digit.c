int _putchar(int);
/**
* print_last_digit - prints the value of the last digit of a number
* @n: number to extract last digit from
* Return: last digit of number n
*/
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit *= -1;
	_putchar(0x30 + digit);
	return (digit);
}
