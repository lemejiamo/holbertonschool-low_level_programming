#include "holberton.h"

/**
 * print_square - make it a square
 * @size: the size of a square
 *
 */

void print_square(int size)

{

if (size > 0)
{
int fila, columna;

for (fila = 0 ; fila < size; fila++)
	{
	for (columna = 0; columna < size; columna++)
	{
		_putchar (35);
	}
	_putchar('\n');
	}
}
else
_putchar('\n');

}

