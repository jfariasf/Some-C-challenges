#include <stdio.h>
/**
* main - Prints the first 50 fibonacci numbers sepparated by a comma
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	long j = 1;
	long k = 1;
	long tmp;
	int start = 0;

	for (i = 0; i <= 49; i++)
	{
		if (start)
			printf(", ");
		printf("%ld", k);
		tmp = k;
		k = j + k;
		j = tmp;
		start = 1;
	}
	printf("\n");
	return (0);
}
