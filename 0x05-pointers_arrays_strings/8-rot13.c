#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - Convert to rot13.
 * @dest: the string
 * Return: the destionation buffer.
 */
char *rot13(char *dest)
{
	char *bkdest = dest;
	char ch[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rt[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*dest != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*dest == ch[i])
			{
				*dest = rt[i];
				break;
			}
		}
		dest++;
	}
	return (bkdest);
}
