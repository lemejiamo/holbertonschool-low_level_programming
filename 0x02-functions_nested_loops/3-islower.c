#include "holberton.h"
/**
 * _islower - son minusculas
 *
 * Return: 1 si es minuscula 0 si es otro
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
