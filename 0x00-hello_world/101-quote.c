#include <stdio.h>
/**
 * main - Prints a message to the standar error
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(message, 1, sizeof(message), stderr);
	return (1);
}
