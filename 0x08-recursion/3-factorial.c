/**
 * factorial - returns the factorial of a number
 * @n: number to get factorial for
 * Return: the factorial of n on success, -1 on failure
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
