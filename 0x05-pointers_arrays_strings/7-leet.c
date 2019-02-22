#include "holberton.h"
/**
 * leet - Print leet style.
 * @dest: the string
 * Return: the destionation buffer.
 */
char *leet(char *dest)
{
	char *bkdest = dest;
	char ch[10] = "aAeEoOtTlL";
	char le[5] = "43071";
	int i;

	while (*dest != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*dest == ch[i] || *dest == ch[i + 1])
				*dest = le[(i + 1) / 2];
		}
		dest++;
	}
	return (bkdest);
}
