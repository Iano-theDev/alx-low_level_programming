#include "3-calc.h"
#include <string.h>


/**
 * get_op_func - gets the operation to perform
 * @s: operator
 * @int: first integer
 * @int: second integer
 * Return: int result, NULL if s doesnt match operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	printf("Error\n");
	exit(99);
}
