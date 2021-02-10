# include <stdio.h>
# include "holberton.h"
/**
 * main - learning arrays and  loops
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char name[10] = "Holberton";
			for (n = 0; n <= 9; n++)
			{
				_putchar(name[n]);
			}
	_putchar('\n');
	return (0);
}
