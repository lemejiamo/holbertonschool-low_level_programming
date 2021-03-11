#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - get the operator
 * @s: aritmethic operator
 * Return: result
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

while (ops[i].op != NULL)
{
	if (*(ops[i].op) == *s)
		return ((ops[i]).f); /* op_sum (num1, num2 ) */
	i++;
}

printf("Error\n");
exit(98);

}

