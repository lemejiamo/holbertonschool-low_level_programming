#include "holberton.h"

/**
 * print_line - let's do it a way
 *
 * Return: void
 */

void print_line(int n)
{

int contador;

	if(n > 0)
    	{
        	for(contador = 0; contador <= n; contador++)
        	{
        	_putchar('_');
        	}
    	}
    	_putchar('\n');
return;
}

