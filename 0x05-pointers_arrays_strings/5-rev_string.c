/**
 * rev_string - reverses a string
 * @s: pointer to a string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char new_str[1000];
	char *ptr = s;
	int n = 0;

	while (*s != '\0')
	{
		new_str[n] = *s;
		n++;
		s++;
	}

	n = 0;

	while (s > ptr)
	{
		s--;
		*s = new_str[n];
		n++;
	}
}
