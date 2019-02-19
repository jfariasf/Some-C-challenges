#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: First int argumen
 * @b: Secong int argument
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
