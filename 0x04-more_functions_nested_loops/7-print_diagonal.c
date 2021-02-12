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

		for (contadorfilas = 0;  contadorfilas < n; contadorfilas++)
    		{
        		for (columnas = 0 ; columnas <= contadorfilas; columnas++)
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
_putchar('\n');
}
