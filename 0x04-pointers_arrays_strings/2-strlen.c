#include "holberton.h"

/**
 * _strlen - Prints the length of a string
 * @s: Pointer to a char array
 * Return: The length of the array/length of string.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	return (size);
}
