#include "holberton.h"

/**
 * print_rev - Takes a pointer to an int as parameter and updates the value it points to to 98
 * Return: Always 0.
 */
void print_rev(char *str)
{
	int count = 0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	str--;
	while(count>0)
	{
		_putchar(*str);
		str--;
		count--;
	}
	_putchar('\n');
}
