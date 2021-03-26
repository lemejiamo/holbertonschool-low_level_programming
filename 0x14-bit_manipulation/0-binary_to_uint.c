#include "holberton.h"
#include <string.h>

/**
 * _strlen_recursion - strength of a string
 * @s: string to read
 * Return: integer
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *
 *
 *
 */

int expo(int x, int n)
{
/*	unsigned int  res = 1;*/

	if (!x || !n)
		return (1);

	return ( x * expo(x, n - 1)) ;

/*	return ();*/
}



/**
 * binary_to_uint - converto to dec
 * @b: pointer to string
 * Return: converted number if success or other if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;
	int len;
	if (*b == '\0')
		return ('\0');

	len = _strlen_recursion(b);
	len -= 1;
	for (i = 0; len >= 0; len--, i++)
	{
		if ((b[len] == '1') || (b[len]  == '0'))
		{
 				dec += expo(2, i) * (b[len] == '1');
		}
		else
			return (0);
	}
	return (dec);
}
