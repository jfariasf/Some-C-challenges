#include "holberton.h"
#include <stdio.h>
int power(int, int);
/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to a string
 * Return: The number converter to integer.
 */
int _atoi(char *s)
{
	int a = 1;
	int counter = 0;
	int init = 0;
	int intvalue = 0;
	int digit;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			if (init > counter && counter == 0)
				init = counter;
			counter++;

		}
		else if (*s == '-')
			a = -(a);
		s++;
		init++;
		if (init > counter && counter != 0)
		{
			s--;
			break;
		}
	}
	while (counter > 0)
	{
		digit = (*(s - counter) - 0x30) * power(10, counter - 1);
		if (a > 0)
			intvalue += digit;
		else
			intvalue -= digit;
		counter--;
	}
	return (intvalue);
}

/**
 * power - Raise a number to a power
 * @number: Number to raise
 * @raise: Raise to this number
 * Return: The number raise to the specified power.
 */
int power(int number, int raise)
{
	int power = number;

	if (raise == 0)
		return (1);
	while (raise > 1)
	{
		power *= number;
		raise--;
	}
	return (power);
}
