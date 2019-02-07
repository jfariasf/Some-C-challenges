#include <stdio.h>
/**
* main - Prints the uppercase and lowercase alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar(0x0A);
	return (0);
}
