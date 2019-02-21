#include "holberton.h"
#include <stdio.h>
void gethexvals(char *, int);
void printstring(char *, int);
/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to a string
 * Return: The number converter to integer.
 */
void print_buffer(char *b, int size)
{
	int row=0x00;
	int *test;

	char buf[10];
	int i=0;
	int ln=10;

	while (size>0)
	{

		printf("%08x: " , row);
		gethexvals(b,ln);
		putchar(' ');
		printstring(b,ln);
		putchar('\n');
		row+=10;
		b+=10;
		size-=10;

		if (size<10)
			ln=size;
	}
}
void gethexvals(char *c,int sz)
{
	char buf[30];
	char *p=buf;
	int sep=0;
	int i;
	for (i=0; i< sz;i++)
	{
		if (i%2==0 && i>0)
		{
			sprintf(p,"%c",0x20);
			p++;
		}
		sprintf(p,"%02x",*c);
		p+=2;
		c++;	
	}
	printf("%-24s",buf);
	/*
	if (sz<10)
	{
		
		for (i=14-sz;i>0;i--)
		{
			if(i%2==0)
				putchar(' ');
			printf("  ");
			i--;
		}
	}
	*/
		
}
void printstring(char *c, int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		if (*c>=0x20 && *c<=0x7e)
			printf("%c",*c);
		else
			putchar('.');
		c++;
	}
}
