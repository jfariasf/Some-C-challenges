#include "holberton.h"
/**
 * _strncat - Copy a string to a buffer and returns the dest buffer.
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: size
 * Return: the destionation buffer.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *bkdest = dest;
	char *bksrc = src;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		src++;
		count++;
	}
	if (n > count)
		n = count;
	while (n > 0)
	{
		*dest = *bksrc;
		dest++;
		bksrc++;
		n--;
	}
	return (bkdest);
}
