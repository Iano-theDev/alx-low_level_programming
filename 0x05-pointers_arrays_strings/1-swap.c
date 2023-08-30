/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
