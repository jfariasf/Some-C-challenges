#include <stdio.h>
/**
* main - Prints the sum of the even fibonacci numbers less than 4000000
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long j = 1;
	long k = 1;
	long tmp;
	int start = 0;
	long buf = 0;

	while (k <= 4000000)
	{
		if (k % 2 == 0)
			buf += k;
		tmp = k;
		k = j + k;
		j = tmp;
		start = 1;
	}
	printf("%ld\n", buf);
	return (0);
}
