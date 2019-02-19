#include "holberton.h"
#include <stdio.h>
int arraycont(char*);
char *seek(char*, int);
/**
 * rev_string - Reverses a string
 * @s: A char pointer pointing to a string
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int count = arraycont(s);
	char str[count];
	char *p = str;
	int c = 0;

//	printf("%d",count);
	s = seek(s , count-1);
	while (count > 0)
	{
		str[c] = *s;
		printf("- %c - %d - c[%d] -",*s,count,c);
		s--;
		count--;
		c++;
	}
	printf("*%s*",p);
	s++;
	while (*p != '\0')
	{
		*s = *p;
		p++;
		s++;
	}
}
int arraycont(char *s)
{	
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

char *seek(char *p, int pos)
{
	while (pos != 0)
	{
		((pos > 0) ? (p++ && pos--) : (p-- && pos++));
	}
	return (p);
}

