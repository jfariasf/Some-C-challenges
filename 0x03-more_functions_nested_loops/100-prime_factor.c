#include "stdio.h"
void largestprime(long);
/**
* main - Compute the number 612852475143 to find the largest prime factor
*
* Return: 0 if sucessful
*/
int main(void)
{
	long val = 612852475143;

	largestprime(val);
	putchar(0x0A);
	return (0);
}

/**
* largestprime - Prints the largest prime factor of a number
*
* @number: The number to compute
*/
void largestprime(long number)
{
	long i;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			if (i == number)
			{
				printf("%ld", i);
			}
			else
			{
				largestprime(number / i);
				break;
			}
		}
	}
}
