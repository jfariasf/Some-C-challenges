#include "holberton.h"
int _strlen(char *);
/**
 * rev_string - Reverses a string
 * @s: A char pointer pointing to a string
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int tail = _strlen(s) - 1;
	char bk;

	while (tail > 0)
	{
		bk = *s;
		*s = *(s + tail);
		*(s + tail) = bk;
		s++;
		tail -= 2;
	}
}

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
