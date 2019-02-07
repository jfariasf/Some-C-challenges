#include <stdio.h>
/**
* main - Prints the lowercase alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char dig;

	for (dig = '0'; dig <= 'f'; dig++)
	{
		if (dig <= '9' || dig >= 'a')
			putchar(dig);
	}
	putchar(0x0A);
	return (0);
}
