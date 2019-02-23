#include "holberton.h"
#include <stdio.h>
void rev_string(char *s);
int _strlength(char *s);
/**
* infinite_add - Adds to numbers
* @n1: First value to sum
* @n2: Second value to sum
* @r: Buffer
* @size_r: Size of the buffer
* Return: Char pointer with result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0;
	int n2len = 0;
	int maxsize;
	int tmp;
	int take = 0;
	int totalchar = 0;
	char *bk = r;

	while (*n1 != '\0')
	{
		n1++;
		n1len++;
	}
	while (*n2 != '\0')
	{
		n2++;
		n2len++;
	}
	n2--;
	n1--;
	maxsize = (n1len > n2len) ? n1len : n2len;
	while (maxsize > 0 && size_r > maxsize)
	{
		tmp = 0;
		if (totalchar < n1len)
		{
			tmp += (*n1 - 0x30);
			n1--;
		}
		if (totalchar < n2len)
		{
			tmp += (*n2 - 0x30);
			n2--;
		}
		tmp += take;
		*r = 0x30 + (tmp % 10);
		take = 0;
		if (tmp > 9)
			take = tmp / 10;
		r++;
		maxsize--;
		totalchar++;
	}
	if (take > 0)
	{
		*r = take + 0x30;
		r++;
		totalchar++;
	}
	if (totalchar >= size_r || size_r <= maxsize)
		return (0);
	*r = '\0';
	rev_string(bk);
	return (bk);
}
/**
  * rev_string - Reverses a string
  * @s: A char pointer pointing to a string
  * Return: Nothing.
  */
void rev_string(char *s)
{
	int tail = _strlength(s) - 1;
	char bk;

	while (tail > 0)
	{
		bk = *s;
		*s = *(s + tail);
		*(s + tail) = bk;
		s++;
		tail -= 2;
	}
}
/**
 * _strlength - Returns a string length
 * @s: A pointer to a string
 * Return: String length.
 */
int _strlength(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
