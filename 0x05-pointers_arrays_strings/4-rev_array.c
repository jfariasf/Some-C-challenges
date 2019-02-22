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

	n -= 1;
	while (n > 0)
	{
		bk = *s;
		*s = *(s + n);
		*(s + n) = bk;
		s++;
		n -= 2;
	}
}
