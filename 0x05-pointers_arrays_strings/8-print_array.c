#include <stdio.h>
#include "holberton.h"

/**
 * print_array - separated by colons
 * @a:array
 * @n:integer
 * Return: none
 */
void print_array(int *a, int n)
{
int  position;

	for (position = 0; position < n ; position++)
		{
		if (position != (n - 1))
			{
			printf("%d", a[position]);
			printf(",");
			printf(" ");
			}
		else
			{
			printf("%d", a[position]);
			}
		}
printf("\n");
}
