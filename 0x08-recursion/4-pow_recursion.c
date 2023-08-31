/**
 * _pow_recursion - gets the power of x raised to y
 * @x: first integer, base number
 * @y: second intiger, power
 * Return: x power y, -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
