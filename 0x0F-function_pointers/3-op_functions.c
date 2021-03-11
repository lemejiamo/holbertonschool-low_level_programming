#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - sum
* @a: firts digit
* @b: second digit
* Return: result of operation
*/
int op_add(int a, int b)
{
return (a + b);

}

/**
* op_sub - difference
* @a: firts digit
* @b: second digit
* Return: result of operation
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - product
* @a: firts digit
* @b: second digit
* Return: result of operation
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - division
* @a: firts digit
* @b: second digit
* Return: result of operation
*/
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a / b);
}
/**
* op_mod - remainder
* @a: firts digit
* @b: second digit
* Return: result of operation
*/
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);

}

