#include "holberton.h"
/**
 * _isupper - check is a char is uppper or otherwise
 * @c: integer or char
 * Return: 1 upper  0 other wise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
