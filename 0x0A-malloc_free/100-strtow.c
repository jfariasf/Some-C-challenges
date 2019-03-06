#include <stdlib.h>
int _strlen(char *);
void _cpy(char *, char *, int);
#define BUFSIZ 1024
/**
 * _strlen - Length of string
 * @s: char pointer
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * strtow - splits a string into words
 * @str: the char pointer
 * Return: the resulting double pointer
 */
char **strtow(char *str)
{
	char **output;
	char bk[BUFSIZ];
	int wc = 0;
	int len = _strlen(str);
	int i;
	int j = 0;
	char c[BUFSIZ];

	if (str == NULL || len == 0)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] > 0x20)
		{
			bk[j] = str[i];
			j++;
		}
		else if (str[i] == 0x20 && str[i - 1] > 0x20)
		{
			wc++;
			bk[j] = ' ';
			j++;
		}
	}
	wc++;
	bk[j] = '\0';
	len = j;
	j = 0;
	output = (char **) malloc(wc * sizeof(char *));
	for (i = 0; i < len; i++)
	{
		if (bk[i] == ' ')
		{
			c[j] = '\0';
			*output = (char *) malloc(sizeof(char) * j + 1);
			_cpy(c, *output, j);
			output++;
			j = -1;
		}
		else
			c[j] = bk[i];
		j++;
	}
	output -= wc - 1;
	return (output);
}
/**
 * _cpy - Just copy from one pointer to the other
 * @src: source
 * @str: dest
 * @n: length
 *
 * Return: Nothing
 */
void _cpy(char *src, char *str, int n)
{
	for (int i = 0; i <= n; i++)
	{
		str[i] = src[i];
	}
}
