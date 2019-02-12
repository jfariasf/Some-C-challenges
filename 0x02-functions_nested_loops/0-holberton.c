int _putchar(int);
/**
* main - Prints "Holberton"
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char msg[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(msg[i]);
	_putchar(0x0A);
	return (0);
}
