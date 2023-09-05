#include "main.h"

/**
 * main - adds two intigers passed as arguments
 * @argc: argument count
 * @argv: arguments array to main
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	unsigned int i, num, sum;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	while (argc--)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (argc > 0 && !(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
