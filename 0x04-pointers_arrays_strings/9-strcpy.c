#include "holberton.h"
char *seek(char *, int);
/**
 * _strcpy - Copy a string to a buffer and returns the dest buffer.
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: the destionation buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	char *bkdest = dest;

	while (*src != '\0')
	{
		count++;
		src++;
	}
	src = seek(src, -(count));
	while (count >= 0)
	{
		*dest = *src;
		dest++;
		src++;
		count--;
	}
	return (bkdest);
}
/**
 * seek - Move a char pointer to the desired position
 * @p: a char pointer
 * @pos: positiong to move the pointer to
 * Return: the pointer moved.
 */
char *seek(char *p, int pos)
{
	while (pos != 0)
	{
		((pos > 0) ? (p++ && pos--) : (p-- && pos++));

	}
	return (p);
}
