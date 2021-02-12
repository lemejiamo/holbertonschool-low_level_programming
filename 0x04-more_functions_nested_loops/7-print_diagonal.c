#include "holberton.h"

/**
 * print_diagonal - draw a diagonal
 * @n: integer
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int  columnas, contadorfilas;

			for (contadorfilas = 1;  contadorfilas <= n; contadorfilas++)
			{
				for (columnas = 1 ; columnas <= contadorfilas; columnas++)
					{
					if (columnas != contadorfilas)
						{
						_putchar (' ');
						}
					else
						{
						_putchar (92);
						_putchar ('\n');
						}
					}
			}
	}
	else if (n == 0)
		{
		_putchar('\n');
		}
	else
		{
	_putchar('\n');
	}
}
