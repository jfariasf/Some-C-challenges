#include "holberton.h"
int _strlength(int *);
/**
 * reverse_array - Reverses a string
 * @s: A char pointer pointing to a string
 * @n: size
 * Return: Nothing.
 */
void reverse_array(int *s, int n)
{
	int bk;

	while (n > 0)
	{
		bk = *s;
		*s = *(s + n - 1);
		*(s + n - 1) = bk;
		s++;
		n -= 1;
	}
}
