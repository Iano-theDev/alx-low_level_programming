#include <stdlib.h>


/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: arguments array
 *
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *v = NULL, *s = NULL;
	int len = 0, x = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		v = av[i];

		while (*v != '\0')
		{
			v++;
			len++;
		}
		len++;
	}

	s = malloc(sizeof(*s) * (len + 1));

	if (s != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			v = av[i];

			while (*v != '\0')
			{
				s[x++] = *v;
				v++;
			}

			s[x++] = '\n';
		}

		s[x] = '\0';
	}

	return (s);
}
