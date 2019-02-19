#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: A char pointer pointing to a string
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int count = 0;
	int n;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str--;
	count--;
	(count % 2 != 0) ? (n = (count - 1) / 2) : (n = count / 2);
	while (n > 0)
	{
		str--;
		n--;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
