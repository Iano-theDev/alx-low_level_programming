#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 * Description: For multiples of 3 print Fizz, for multiples
 * of 5 print Buzz, for multiples of 3 and 5 prints FizzBuzz.
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	return (0);
}
