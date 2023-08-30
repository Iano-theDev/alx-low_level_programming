int _putchar(int n);

/**
 * _puts_recursion - prints a string recursively followed by a new line
 * @s: string pointer to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
