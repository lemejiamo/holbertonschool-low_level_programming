#include "holberton.h"

/**
 * puts2 - puts 2
 * @str: string
 * Return: none
 */
void puts2(char *str)
{

while (*str != '\0')
	{
	if (*str % 2 == 0)
		{
		_putchar(*str);
		}
	str++;
	}
_putchar ('\n');
}
