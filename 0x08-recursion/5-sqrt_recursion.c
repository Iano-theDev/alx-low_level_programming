int get_sqrt(int a, int b);

/**
 * _sqrt_recursion - returns the square-root of a number
 * @n: number to get square-root of
 * Return: square-root of n, -1 on failure ie. if n has no root
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(1, n));
}

/**
 * get_sqrt - checks if the square of a numbers is equal to b
 * @a: first intiger, to square
 * @b: second intiger, check against the squaer of a
 * Return: the square root of b, or -1 if b has no root
 */

int get_sqrt(int a, int b)
{
	if ((b < 0) || (a > b))
		return (-1);
	if ((a * a) == b)
		return (a);
	return (get_sqrt((a + 1), b));
}
