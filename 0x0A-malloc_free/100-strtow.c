#include <stdlib.h>
#include <stdio.h>
int _strlen(char *);
void _cpy(char *, char *, int);
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
	char bk[1024];
	int wc = 0;
	int len = _strlen(str);
	int i;
	int j = 0;
	char c[1024];

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
	if (j == 0)
		return (NULL);
	if (bk[j - 1] == 0x20)
	{
		bk[j - 1] = '\0';
		j--;
		wc--;
	}
	else
		bk[j] = '\0';
	len = j;
	j = 0;
	output = (char **) malloc(wc * sizeof(char *) + 1);
	for (i = 0; i <= len; i++)
	{
		if (bk[i] == ' ' || bk[i] == '\0')
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
	output -= wc;
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
	int i;

	for (i = 0; i <= n; i++)
		str[i] = src[i];
}
