#include "holberton.h"
/**
 * string_toupper - Copy a string to a buffer and returns the dest buffer.
 * @dest: the stringr
 * Return: the destionation buffer.
 */
char *string_toupper(char *dest)
{
	char *bkdest = dest;

	while (*dest != '\0')
	{
		if (*dest >= 0x61 && *dest <= 0x7a)
			*dest -= 0x20;
		dest++;
	}
	return (bkdest);
}
