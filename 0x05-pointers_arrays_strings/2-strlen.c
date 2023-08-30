/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
	}

	return len;
}
