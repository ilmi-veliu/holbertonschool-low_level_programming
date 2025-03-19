#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Selects the correct function for the operation.
 * @s: The operator passed as argument.
 *
 * Return: Function pointer for the operation, or NULL if invalid.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
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
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
