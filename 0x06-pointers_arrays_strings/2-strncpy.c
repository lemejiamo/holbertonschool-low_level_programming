#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: destiny
 * @src: source
 * @n: long
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int  j = 0; /* the counter of the position of the arrays */


for ( ; src[j] != '\0'; j++)
	{
	if (j < n)
		{
		dest[j] = src[j];
		}
	}

for ( ; j < n; j++)
	{
	dest[j] = '\0';
	}
return (dest);
}
