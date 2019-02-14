#include "holberton.h"
/**
* print_triangle - Prints a triangle followed by a newline
* @size: the size of the triangle
* Return: Nothing
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			(i + j >= size - 1) ? _putchar('#') : _putchar(' ');
		_putchar(0x0A);
	}
}
