#include "holberton.h"

/**
 * print_times_table -  lest do it ***
 * @n: integer
 */
void print_times_table(int n)

{
int fila, number;

for (fila = 0 ; fila <= n; fila++)
{
	for (number = 0; number <= n; number++)
	{
		int resultado = fila * number;

		if (number == 0)
		{
			_putchar('0');
		}
		else if (resultado < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + resultado);
		}
		else if (resultado > 9 && resultado < 100)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (resultado / 10));
			_putchar('0' + (resultado % 10));
		}
		else if (resultado > 99 && resultado < 1000)
		{
			_putchar(' ');
			_putchar('0' + (resultado / 100));
			_putchar('0' + ((resultado % 100) / 10));
			_putchar('0' + (resultado % 10));
		}
		else if (resultado > 999 && resultado < 10000)
		{
			_putchar('0' + (resultado / 1000));
			_putchar('0' + ((resultado % 1000) / 100));
			_putchar('0' + (((resultado % 1000) % 100) / 10));
			_putchar('0' + (resultado % 10));
		}
		if (number != n)
			_putchar(',');
	}
	_putchar('\n'); /* salto de linea */
}
}
