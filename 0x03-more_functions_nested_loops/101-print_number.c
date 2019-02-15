#include "holberton.h"
int power(int, int);
int finddigits(int);
/**
* print_number - Prints an integer
* @n: The integer to print
* Return: Nothing
*/
void print_number(int n)
{
	int num = 10;
	int numdigts = finddigits(n);
	int maxval = power(num, numdigts - 1);
	int dgtdiff;

	if (n == 0)
	{
		_putchar(0x30);
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (maxval > 0)
	{
		dgtdiff = finddigits(maxval) - finddigits(n);
		if (dgtdiff > 0)
		{
			while (dgtdiff > 0)
			{
				_putchar(0x30);
				if (maxval > 0)
					maxval /= num;
				if (maxval == 0)
					return;
				dgtdiff--;
			}
			_putchar(0x30 + n / maxval);
		}
		else
			_putchar(0x30 + n / maxval);
		n %= maxval;
		maxval /= num;
	}
}

/**
* power - Raise a number to the specified power
* @number: Number to operate
* @to: raise to
* Return: The number raised
*/
int power(int number, int to)
{
	int result = number;

	while (to > 1)
	{
		result *= number;
		to--;
	}
	return (result);
}

/**
* finddigits - Find the number of digits on an integer
* @n: The integer to operate
* Return: Number of digits
*/
int finddigits(int n)
{
	int i = 0;

	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
