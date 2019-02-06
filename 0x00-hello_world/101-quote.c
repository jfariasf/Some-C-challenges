#include <stdio.h>
/**
 * main - Prints a message to the standard error
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char message_stderr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&message_stderr, 1, sizeof(message_stderr), stderr);
	return (1);
}
