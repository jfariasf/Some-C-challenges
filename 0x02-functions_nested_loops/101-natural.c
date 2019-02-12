#include <stdio.h>
/**
* main - Prints the sum of the multiples of 3 and 5 less than 1024
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int acc = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			acc += i;
	}
	printf("%d\n", acc);
	return (0);
}
