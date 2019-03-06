#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concat 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the array
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int sz1 = 0;
	int sz2 = 0;
	int i, j;

	if (s1 != NULL)
	{
		for (sz1 = 0; s1[sz1]; sz1++)
		;
	}
	if (s2 != NULL)
	{
		for (sz2 = 0; s2[sz2]; sz2++)
		;
	}
	array = (char *) malloc(sizeof(char) * (sz1 + sz2) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
		array[i] = s1[i];
	for (j = 0; j < sz2; j++, i++)
		array[i] = s2[j];
	array[i] = '\0';
	return (array);
}
