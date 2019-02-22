#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - Capitalize a string.
 * @dest: the stringr
 * Return: the destionation buffer.
 */
char *cap_string(char *dest)
{
	char *bkdest = dest;
	char sep[13] = " \t\n,;.!?\"(){}";
	int cap = 0;
	int i;

	while (*dest != '\0')
	{
		if (*dest >= 0x61 && *dest <= 0x7A && cap==1)
		{
			
			*dest -= 0x20;
			cap = 0;
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
	
		dest++;
	}
	return (bkdest);
}
