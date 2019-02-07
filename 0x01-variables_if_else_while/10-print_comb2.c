#include <stdio.h>
/**
* main - Prints the single digit integers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0x30; i < 0x3A; i++)
	{
		for (j = 0x30; j < 0x3A; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 0x3A && j < 0x39)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(0x0A);
	return (0);
}
