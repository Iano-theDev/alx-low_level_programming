#include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
  	int swap;

	  swap = *a;
	  *a = *b;
	  *b = swap;
}
