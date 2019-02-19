#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string
 * @str: Input char array
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
