#include "holberton.h"
void _putchar(int);

/**
 * _strlen - Takes a pointer to an int as parameter and updates the value it points to to 98
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int size=0;
	while(*s!='\0')
	{
		s++;
		size++;
	}
	return size;
}
