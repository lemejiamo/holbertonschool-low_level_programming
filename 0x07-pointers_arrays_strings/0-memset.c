#include "holberton.h"

/**
 * _memset - fills the memory with a constant char
 * @n: unsigned int
 * @b: a char to fill the array
 * @s: our arr
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
