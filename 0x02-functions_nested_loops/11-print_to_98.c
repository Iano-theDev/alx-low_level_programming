#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        if (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
        else if (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
    }
    printf("98\n");
}
