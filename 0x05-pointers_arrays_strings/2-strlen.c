#include "holberton.h"

/**
 * _strlen -  count spaces
 * @s: string
 * Return: n
 */

int _strlen(char *s)

{

int n;

while (*s++ != '\0')
	n++;

return (n);
}
