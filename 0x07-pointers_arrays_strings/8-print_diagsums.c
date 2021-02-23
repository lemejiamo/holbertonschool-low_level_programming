#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sums
 * @a: integer
 * @size: suma
 * Return: none
 */
void print_diagsums(int *a, int size)
{
int  i, iterador, count = 0, count2 = 0;

for (iterador = 0; iterador < size; iterador++)
	{
	i = iterador % size;
	count += a[i + (i * size)];
	count2 += a[i + ((size - 1 - i) * size)];
	}
	printf ("%d, %d\n", count, count2);


}
