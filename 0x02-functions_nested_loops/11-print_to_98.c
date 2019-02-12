#include "stdio.h"
/**
* print_to_98 - Prints all the natural numbers from n to 98
* @n: the specified starting number
* Return: nothing
*/
void print_to_98(int n)
{
	int i = 98;

	while (i != n)
	{
		printf("%d", n);
		if (n > i)
			n--;
		else
			n++;
		printf(", ");
	}
	printf("%d\n", i);
}
