#include "holberton.h"
/**
 * _isdigit - check is a digit  or otherwise
 * @c: integer
 * Return: 1 digit  0 other wise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
