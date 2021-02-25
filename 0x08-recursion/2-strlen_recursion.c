#include "holberton.h"
/**
 * _strlen_recursion - strength of a string
 * @s: string to read
 * Return: integer
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
	return (0);

return (1 + _strlen_recursion(s + 1));

}
