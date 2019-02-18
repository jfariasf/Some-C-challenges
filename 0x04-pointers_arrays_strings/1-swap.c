#include "holberton.h"

/**
 * swap_int - Takes a pointer to an int as parameter and updates the value it points to to 98
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a =temp;
}
