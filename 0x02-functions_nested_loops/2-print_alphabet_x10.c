#include "holberton.h"
/**
 * print_alphabet_x10 - multi x 10
 */

void print_alphabet_x10(void)
{
	int m;

	for (m = 0; m <= 9 ; m++)
	{
		int n;

		for (n = 97; n <= 122 ; n++)
		{
			_putchar(n);

		}
		_putchar('\n');
	}

}
