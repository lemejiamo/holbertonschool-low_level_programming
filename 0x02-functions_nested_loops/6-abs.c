#include "holberton.h"
/**
 * _abs - absolute value
 * @r: integer
 * Return: 0
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = (r * -1);
	}
	return (r);

}
