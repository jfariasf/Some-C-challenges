#include "holberton.h"
#include <stdio.h>
void gethexvals(char *, int);
void printstring(char *, int);
/**
 * print_buffer - Convert a string to an integer
 * @b: Pointer to a string
 * @size: size
 * Return: The number converter to integer.
 */
void print_buffer(char *b, int size)
{
	int row = 0x00;
	int ln = 10;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (size > 0)
	{

		printf("%08x: ", row);
		gethexvals(b, ln);
		putchar(' ');
		printstring(b, ln);
		putchar('\n');
		row += 10;
		b += 10;
		size -= 10;

		if (size < 10)
			ln = size;
	}
}
/**
 * gethexvals - Convert a string to an integer
 * @c: Pointer to a string
 * @sz: size
 * Return: The number converter to integer.
 */

void gethexvals(char *c, int sz)
{
	char buf[30];
	char *p = buf;
	int i;

	for (i = 0; i < sz; i++)
	{
		if (i % 2 == 0 && i > 0)
		{
			sprintf(p, "%c", 0x20);
			p++;
		}
		sprintf(p, "%02x", *c);
		p += 2;
		c++;
	}
	printf("%-24s", buf);
}
/**
 * printstring - Convert a string to an integer
 * @c: Pointer to a string
 * @sz: size
 * Return: The number converter to integer.
 */
void printstring(char *c, int sz)
{
	int i;

	for (i = 0; i < sz; i++)
	{
		if (*c >= 0x20 && *c <= 0x7e)
			printf("%c", *c);
		else
			putchar('.');
		c++;
	}
}
