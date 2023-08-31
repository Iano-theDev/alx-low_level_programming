int get_prime(int a, int b);

/**
 * is_prime_number - returns 1 if n is a prime number
 * @n: intiger to check
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (get_prime(2, n));
}

/**
 * get_prime - checks if b is prime
 * @a: int to check modulus of b
 * @b: int to check if is prime
 * Return: 1 if b is prime, 0 otherwise
 */

int get_prime(int a, int b)
{
	if (b < 2)
		return (0);
	if ((b % a) == 0)
		return (0);
	if (a * a > b)
		return (1);
	return (get_prime((a + 1), b));
}
