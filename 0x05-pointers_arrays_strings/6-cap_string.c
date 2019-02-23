#include "holberton.h"
/**
 * cap_string - Capitalize a string.
 * @dest: the string
 * Return: the destionation buffer.
 */
char *cap_string(char *dest)
{
	char *bkdest = dest;
	char sep[13] = " \t\n,;.!?\"(){}";
	int cap = 0;
	int i;
	int j = 0;

	while (*dest != '\0')
	{
		if (*dest >= 0x61 && *dest <= 0x7A)
		{
			if (cap == 1 || j == 0)
			{
				*dest -= 0x20;
				cap = 0;
			}
		}
		else
			cap = 0;
		for (i = 0; i < 13; i++)
		{
			if (*dest == sep[i])
			{
				cap = 1;
				break;
			}
		}
		j = 1;
		dest++;
	}
	return (bkdest);
}
