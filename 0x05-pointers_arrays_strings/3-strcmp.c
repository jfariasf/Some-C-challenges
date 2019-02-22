#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - Copy a string to a buffer and returns the dest buffer.
 * @s1: the destination buffer
 * @s2: the source buffer
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{

	while ((*s2 != '\0' && *s1 != '\0') && (*s1 - *s2) == 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
