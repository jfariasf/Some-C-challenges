#include <stdio.h>
/**
* main - Prints the lowercase alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(0x0A);
	return (0);
}
