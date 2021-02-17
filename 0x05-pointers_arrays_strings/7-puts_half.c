#include "holberton.h"
/**
 * puts_half - puts_half2
 * @str: string
 * Return: none
 */
void puts_half(char *str)
{
int n, p, mitad;

n = 0;

	while (str[n] != '\0')
		{
		n++;
		}

	if (n % 2 == 0)
		{
		mitad = n / 2;
		}
	else
		{
		mitad = (n - 1) / 2;
		mitad++;
		}

for (p = mitad ; p <= n; p++)
	{
	_putchar (str[p]);
	}
_putchar ('\n');
}
