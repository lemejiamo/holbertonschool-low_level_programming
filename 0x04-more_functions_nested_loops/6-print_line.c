#include "holberton.h"

/**
 * print_line - let's do it a way
 * @n:  entero
 * Return: void
 */

void print_line(int n)
{
int contador;

	if (n > 0)
	{
		for (contador = 0; contador <= n; contador++)
		{
			_putchar ('_');
		}
	}
_putchar ('\n');
}

