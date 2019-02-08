#include <stdio.h>
/**
* main - Prints all the possible combination of two two-digit number
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int pass;

	for (i = 0x30; i <= 0x39; i++)
	{
		for (j = 0x30; j <= 0x39; j++)
		{
			for (k = 0x30; k <= 0x39; k++)
			{
				for (l = 0x30; l <= 0x39; l++)
				{
					if (k % 0x10 * 0x10 + l % 0x10 <= i % 0x10 * 0x10 + j % 0x10)
						continue;
					if (pass == 1)
					{
						putchar(',');
						putchar(' ');
					}
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						pass = 1;
				}
			}
		}
	}
	putchar(0x0A);
	return (0);
}
