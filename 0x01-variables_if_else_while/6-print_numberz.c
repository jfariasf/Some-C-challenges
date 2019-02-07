#include <stdio.h>
/**
* main - Prints the single digit integers using putchar only
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar(i);
	}
	putchar(0x0A);
	return (0);
}
