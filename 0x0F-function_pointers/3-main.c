#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main funtion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: only on error
 */
int main(int argc, char *argv[])
{
int  num1, num2;
int result;
char operador;
(void)operador;

	if (argc !=  4)
		exit(98);

	if (atoi(argv[1]) && atoi(argv[3]))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}


result = (get_op_func(argv[2]))(num1, num2);

printf("%d\n", result);
return (0);
}

