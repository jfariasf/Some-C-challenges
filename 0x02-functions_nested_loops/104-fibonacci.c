#include <stdio.h>
#include <limits.h>
void calculate_last(unsigned long, int);
/**
* main - Prints the first 98 fibonacci numbers separated by a comma and a space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long k = 1;
	unsigned long j = 0;
	unsigned long tmp;
	int k1 = 0;
	int j1 = 0;
	int start = 0;
	int start2 = 0;
	int tmp2;

	for (i = 0; i < 98; i++)
	{
		if (start)
			printf(", ");
		if ((k > ULONG_MAX / 10) || (start2 == 1))
		{
			if (start2 == 0)
			{
				k1 = (int) (k % 1000);
				j1 = (int) (j % 1000);
				k /= 1000;
				j /= 1000;
			}
			tmp2 = k1;
			k1 = j1 + k1;
			j1 = tmp2;
			start2 = 1;
		}
		tmp = k;
		k = j + k;
		j = tmp;
		calculate_last(k, k1);
		start = 1;
	}
	printf("\n");
	return (0);

}
/**
* calculate_last - Prints the first 98 fibonacci numbers
* @k: value to print but 3 digits
* @k1: last 3 digits
* Return: Always 0 (Success)
*/
void calculate_last(unsigned long k, int k1)
{
	if (k1 > 999)
	{
		k += 1;
		k1 %= 1000;
	}
	if (k1 > 0)
		printf("%lu%03d", k, k1);
	else
		printf("%lu", k);
}
