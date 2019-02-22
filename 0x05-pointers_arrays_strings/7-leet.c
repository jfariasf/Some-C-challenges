#include "holberton.h"
/**
 * cap_string - Capitalize a string.
 * @dest: the stringr
 * Return: the destionation buffer.
 */
char *leet(char *dest)
{
	char *bkdest = dest;

	while (*dest != '\0')
	{
		if (*dest == 0x61 && *dest == 0x41)
			*dest = 0x34;	
		else if (*dest == 0x45 || *dest == 0x65)
			*dest = 0x33;
		else if (*dest == 0x6f || *dest == 0x4f)
			*dest = 0x30;
		else if (*dest == 0x74 || *dest == 0x54)
			*dest = 0x37;
		else if (*dest == 0x4c || *dest == 0x6c)
			*dest = 0x31;
		dest++;
	}
	return (bkdest);
}
