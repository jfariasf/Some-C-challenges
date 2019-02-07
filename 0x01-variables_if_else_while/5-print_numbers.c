#include <stdio.h>
/**
* main - Prints the single digit integers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(0x0A);
	return (0);
}
