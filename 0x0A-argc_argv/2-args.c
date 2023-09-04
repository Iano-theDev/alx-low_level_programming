#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
