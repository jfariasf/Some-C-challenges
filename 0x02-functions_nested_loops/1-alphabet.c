int _putchar(int);
/**
* print_alphabet - Prints the lowercase alphabet
*
* Return: Nothing
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar(0x0A);
}
