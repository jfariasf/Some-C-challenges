#include "holberton.h"
#include "stdio.h"
int power(int, int);
int finddigits(int);
/**
* print_number - Prints an integer
* @n: The integer to print
* Return: Nothing
*/
void print_number(int n)
{
	int numdigts;
	int maxval;

	if (n == 0)
	{
		_putchar('0' + n);
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	numdigts = finddigits(n);
	maxval = power(10, numdigts - 1);
	while (numdigts > 0)
	{
		if (n > 0 || n < 0)
		{
			_putchar('0' + ((n < 0) ? -(n / maxval) : (n / maxval)));
			n %= maxval;
			maxval /= 10;
		}
		else
		{
			_putchar('0');
		}
		numdigts--;
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

	if (to == 0)
		return (1);
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

	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
