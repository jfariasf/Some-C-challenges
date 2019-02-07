#include <stdio.h>
/**
* main - Prints the lowercase alphabet except q or e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar(0x0A);
	return (0);
}
