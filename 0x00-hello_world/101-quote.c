#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints a string to stderr using fprintf
 * Return: 1 always
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	       60, 1, stderr);
	return (1);
}
