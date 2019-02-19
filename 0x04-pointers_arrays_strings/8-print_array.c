#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: A pointer to the start of an array
 * @n: Number of items in the array
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int sep = 0;

	while (n > 0)
	{
		if (sep)
			printf(", ");
		printf("%d", *a);
		a += 1;
		n--;
		sep = 1;
	}
	printf("\n");
}
