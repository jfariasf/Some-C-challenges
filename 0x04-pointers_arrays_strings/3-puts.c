#include "holberton.h"

/**
 * _puts - Takes a pointer to an int as para
 * Return: Always 0.
 */
void _puts(char *str)
{
	while(*str!='\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
