#include "holberton.h"
/**
 * _puts_recursion - similar to put without loop
 * @s: struing to print
 * Return: none
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
else
	_putchar('\n');
}


