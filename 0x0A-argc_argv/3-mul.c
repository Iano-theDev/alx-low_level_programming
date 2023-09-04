#include "main.h"

/**
 * main - multiplies two ints
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);

		return (0);
	}
	printf("Error\n");

	return (1);
}
