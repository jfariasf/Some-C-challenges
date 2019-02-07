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

	for (i = 0x30; i <= 0x39; i++)
	{
		for (j = 0x30; j <= 0x39; j++)
		{
			if ((i > 0x30) || (j > 0x30))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(j);
			
		}
	}
	putchar(0x0A);
	return (0);
}
