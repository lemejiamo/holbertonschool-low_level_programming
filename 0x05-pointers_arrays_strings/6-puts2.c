#include "holberton.h"

/**
 * puts2 - puts 2
 * @str: string
 * Return: none
 */
void puts2(char *str)
{
int n;
n = 0;
while (str[n] != '\0')
	{
	if (n % 2 == 0)
		{
		_putchar(str[n]);
		}
	n++;
	}
_putchar ('\n');
}
