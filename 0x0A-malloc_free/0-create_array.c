#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create array based on char
 * @size: the size
 * @c: char
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	for (i = 0; i < (int) size; i++)
		array[i] = c;
	return (array);
}
