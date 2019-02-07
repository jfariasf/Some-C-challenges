#include <stdio.h>
/**
* main - Prints the uppercase and lowercase alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
	{
		if (ch <= 'Z' || ch >= 'a')
			putchar(ch);
	}
	putchar(0x0A);
	return (0);
}
