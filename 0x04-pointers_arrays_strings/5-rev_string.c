#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: A char pointer pointing to a string
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;

	char str[count];
	char *p = str;
	int c = 0;

	while (count > 0)
	{
		str[c] = *s;
		s--;
		count--;
		c++;
	}
	s++;
	while (*p != '\0')
	{
		*s = *p;
		p++;
		s++;
	}
}
