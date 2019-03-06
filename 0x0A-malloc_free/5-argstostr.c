#include <stdlib.h>
/**
 * argstostr - Arguments to string
 * @ac: Argument count
 * @av: The array or args
 *
 * Return: the single array
 */
char *argstostr(int ac, char **av)
{
	char *array, *test;
	int i, count = 0;

	test = *(av);
	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac > 0)
	{
		if (*test == '\0')
		{
			ac--;
		}
		test++;
		count++;
	}
	test -= count;
	array = (char *) malloc(sizeof(char) * count + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		if (test[i] == '\0')
			array[i] = '\n';
		else
			array[i] = test[i];
	
	array[i] = '\0';
	return (array);
}
