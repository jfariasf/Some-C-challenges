/**
* _isupper - Checks if a character is uppercase
* @c: Integer to check if it's a character
* Return: 1 if uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
