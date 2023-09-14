#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtructs two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiple of a and b
 */
int op_mul(int a, int b)
{
		return (a * b);

}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - gets the modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of a to b
 */
int op_mod(int a, int b)
{
	if (b)
	{

		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
