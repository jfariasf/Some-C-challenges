#include "holberton.h"

/**
 * print_rev - Prints a sting in reverse
 * @str: the input string
 * Return: Nothing.
 */
void print_rev(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str--;
	while (count > 0)
	{
		_putchar(*str);
		str--;
		count--;
	}
	_putchar('\n');
}
