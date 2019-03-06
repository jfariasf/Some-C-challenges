#include <stdlib.h>
/**
 * _strdup - Create array based on other
 * @str: the char pointer
 *
 * Return: the array
 */
char *_strdup(char *str)
{
	char *array;
	int siz, i;

	for (siz = 0; str[siz] != '\0'; siz++)
	;
	if (siz == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * siz);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (int) siz; i++)
		array[i] = str[i];
	return (array);
}
