#include "holberton.h"
/**
 * _isalpha - son mayus
 * @c:  is a integer input
 * Return: 1 si es mayus  0 si es otro
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
