#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the last digit of a randomly generated number
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("Last digit of %d is %d ", n, ldigit);
	if (ldigit > 5)
		printf("and is greater than 5\n");
	else if ((ldigit < 6) && (ldigit != 0))
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0i\n");
	return (0);
}
