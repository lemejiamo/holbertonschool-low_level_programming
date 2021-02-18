#include "holberton.h"
/**
 * *_charstrncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: fields to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;

while (dest[i] != '\0')  /* cicle to find the position to begin to write */
	i++;

for  (j = 0; j <= (n - 1); j++)
	{
	if (src[j] == '\0')
		{
		j = n;
		}
	dest[i + j]  = src[j];
	}
return (dest);
}
