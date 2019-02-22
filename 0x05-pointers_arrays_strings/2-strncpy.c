#include "holberton.h"
/**
 * _strncpy - Copy a string to a buffer and returns the dest buffer.
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: size
 * Return: the destionation buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *bkdest = dest;
	int count = 0;
	char *bksrc = src;

	while (*src != '\0')
	{
		src++;
		count++;
	}
	while (n > 0)
	{
		if (count > 0)
		{
			*dest = *bksrc;
			bksrc++;
			count--;
		}
		else
			*dest = '\0';
		dest++;
		n--;
	}
	return (bkdest);
}
