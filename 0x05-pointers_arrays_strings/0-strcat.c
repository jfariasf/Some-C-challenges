#include "holberton.h"
/**
 * _strcat - Copy a string to a buffer and returns the dest buffer.
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: the destionation buffer.
 */
char *_strcat(char *dest, char *src)
{
	char *bkdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
	return (bkdest);
}
