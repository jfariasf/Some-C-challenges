#include "holberton.h"
/**
* print_most_numbers - Prints the numbers from 0 to 9
*
* Return: Nothing
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar(0x0A);
}
