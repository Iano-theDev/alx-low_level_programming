int _putchar(int n);

/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: pointer to string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
