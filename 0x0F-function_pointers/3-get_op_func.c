#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - The function selects the correct operation function
 * @s: The operator passed as an argument to the program
 *
 * Return: Pointer to the function that corresponds to the operator given
 * as a paremeter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
