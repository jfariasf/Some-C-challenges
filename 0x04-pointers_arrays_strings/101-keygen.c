#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Key generator for 101-crackme. Prints a valid key.
 * Return: 0 if sucessful
*/
int main(void)
{
	time_t t;
	int acc = 0;
	int keynum = 0xad4;
	int maxascii = 0x5e;
	int base = 0x20;
	int charact;

	srand((unsigned int) time(&t));
	while (acc != keynum)
	{
		if (keynum - acc <= base + maxascii)
			charact = (keynum - acc);
		else
			charact = base + rand() % maxascii;
		putchar(charact);
		acc += charact;
	}
	putchar('\n');
	return (0);
}
