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
	int k;

	for (i = 0x30; i <= 0x39; i++)
	{
		for (j = i; j <= 0x39; j++)
		{
			for (k = j; k <= 0x39; k++)
			{
				if (i != j && i != k && j != k)
				{
					if ((i > 0x30) || (j > 0x31) || (k > 0x32))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(k);
				}
			}
		}
	}
	putchar(0x0A);
	return (0);
}
