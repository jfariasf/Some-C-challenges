#include <stdio.h>
#include <limits.h>
/**
* main - Prints the first 98 fibonacci numbers separated by a comma and a space
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long k=1;
	unsigned long j=1;
	unsigned long tmp;
	unsigned long partial1;
	unsigned long partial2;
	int partialresult;
	int digittmp;
	int start = 0;

	for (i = 0; i < 98; i++)
	{
		if (start)
			printf(", ");
		if (k > 100000000000000000){
			partial1 = k % 10;
			partial2 = j % 10;			
			k /= 10;
			j /= 10;
			tmp =k;
			k=j+k;
			j=tmp;
			partialresult=partial1+partial2;
			if(partialresult>9)
			{
				partialresult=((k%10)*10)+(partialresult);
				
			}
			printf("f(%d) %lu%d",i,k,partialresult);
		}
		else{
		printf("f(%i) %lu",i,k);
		}
		tmp = k;
		k = j + k;
		j = tmp;
		start = 1;
		
	}
	printf("\n");
	return (0);
}
