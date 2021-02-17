#include "holberton.h"

/**
 * print_rev - ver_tnirp.
 * @s: string
 * Return: none.
 */
void print_rev(char *s)
{
int n;
n = 0;
	while (s[n] != '\0')
		n++;
	n--;
	while (n >= 0)
		{
		_putchar (s[n]);
		n--;
		}
_putchar ('\n');
}

