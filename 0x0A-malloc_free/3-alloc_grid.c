#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concat 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int **harray;
	int i, j;

	if (width <= 0 || width <= 0)
		return (NULL);

	harray = (int **) malloc(sizeof(int **) * height + 1);
	if (harray == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		harray[i] = (int *) malloc(sizeof(int) * width + 1);
		if (harray[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			harray[i][j] = 0;
	}
	return (harray);
}
