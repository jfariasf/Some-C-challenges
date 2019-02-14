#include "stdio.h"
void print_char_array(char[], int);
/**
* main - Prints 1 to 100 and switch multiples of 3/5 for Fizz/Buzz or both
*
* Return: 1 if digit and 0 otherwise
*/
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	int sep = 0;

	for (i = 1; i <= 100; i++)
	{
		if (sep == 1)
			putchar(' ');
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("%s%s", fizz, buzz);
			else
				printf("%s", (i % 3 == 0) ? fizz : buzz);
		}
		else
			printf("%d", i);
		sep = 1;
	}
	putchar('\n');
	return (0);
}

