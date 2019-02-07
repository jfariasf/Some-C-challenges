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

	for (i = 0x30; i <= 0x39; i++)
	{
		for (j = 0x30; j <= 0x39; j++)
		{
			for (k = i; k <= 0x39; k++)
			{
				for (l = j; l <= 0x39; l++)
				{
					if ((i + j != k + l) || (i != k && j != l))
					{
					if (i > 0x30 || j > 0x30 || k > 0x30 || l > 0x31)
					{
						putchar(',');
						putchar(' ');
					}
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
				}
			}
		}
	}
	putchar(0x0A);
	return (0);
}
