#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: The number of times the character \ should be printed
* Return: Nothing
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar((i == j) ? '\\' : ' ');
		if (i < n - 1)
			_putchar('\n');
	}
	_putchar(0x0A);
}
