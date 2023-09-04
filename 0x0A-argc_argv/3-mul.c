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

	(void)argc;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;

	printf("%d\n", result);

	return (0);
}
