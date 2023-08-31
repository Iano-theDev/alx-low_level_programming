/**
 * _strlen_recursion -  returns the length of a string
 * @s: pointer to string check lenght from.
 * Return: length of s on success.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
