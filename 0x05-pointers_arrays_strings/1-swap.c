#include "holberton.h"

/**
 * swap_int - swap two integers
 * @a: integar
 * @b: integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
int i;
	i = *a;
	*a = *b;
	*b = i;
}

