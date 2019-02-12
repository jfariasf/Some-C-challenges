#include <stdio.h>
/**
* main - Prints the sum of the even fibonacci numbers less than 4000000
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int j = 1;
	int k = 1;
	int tmp;
	int buf = 0;

	while (k <= 4000000)
	{
		if (k % 2 == 0)
			buf += k;
		tmp = k;
		k = j + k;
		j = tmp;
	}
	printf("%d\n", buf);
	return (0);
}
