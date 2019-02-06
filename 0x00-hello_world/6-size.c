#include <stdio.h>
/**
 * main - Prints the size of the primitive types:
 *  char, int, long int, long long int, float
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int charvar = (int)sizeof(char);
	int intvar =  (int)sizeof(int);
	int longintvar = (int)sizeof(long int);
	int longlongintvar = (int)sizeof(long long int);
	int floatvar = (int)sizeof(float);

	printf("Size of a char %d byte(s)\n", charvar);
	printf("Size of an int %d byte(s)\n", intvar);
	printf("Size of a long int %d byte(s)\n", longintvar);
	printf("Size of a long long int %d byte(s)\n", longlongintvar);
	printf("Size of a float %d byte(s)\n", floatvar);
	return (0);
}
