/**
 * _strlen_recursion -  returns the length of a string
 * @s: pointer to string check lenght from.
 * Return: length of s on success.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n + 1;

		_strlen_recursion(s + 1);
	}

	return (n);
}
