#include "holberton.h"

/**
 * _atoi - Takes a pointer to an int as para
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int a = 1;
	int counter = 0;

	while(*str!='\0')
	{
		if (*str>='0' && *str<='9')
			counter += 1;
		else
		{
			
		if (*str=='-')
			a=-(a);
		else if (*str=='+')
			a=a;
		
			
		}
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
int countdigits
