#include <stdio.h>
/**
* main - Prints the first 98 fibonacci numbers separated by a comma and a space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	double j = 1;
	double k = 1;
	double tmp;
	int start = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (start)
			printf(", ");
		printf("%.0f", k);
		tmp = k;
		k = j + k;
		j = tmp;
		start = 1;
	}
	printf("\n");
	return (0);
}
