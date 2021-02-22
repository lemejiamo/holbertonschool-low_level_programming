#include "holberton.h"

/**
 * *_memcpy - memory copy
 * @src: array to read
 * @dest: array to write
 * @n: count of fields to read
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;


for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
return (dest);
}
