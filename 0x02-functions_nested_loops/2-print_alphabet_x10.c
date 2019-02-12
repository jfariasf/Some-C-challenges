#include "holberton.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Return: Nothing
*/
void print_alphabet_x10(void)
{
	char ch;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar(0x0A);
	}
}
