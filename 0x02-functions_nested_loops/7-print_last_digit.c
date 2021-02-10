#include "holberton.h"

/**
 * print_last_digit - that tell's everithing'
 * @n: digit integer
 * Return: r
 */

int print_last_digit(int n)

{
	int r;

	r = (n % 10);
	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar(r + '0');
	return (r);
}
