#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: char
 */

char  *_strcat(char *dest, char *src)

{
int i = 0, j = 0 ; /* couters to arrays */

while (dest[i] != '\0')  /* cicle to find the position to begin to write */
	i++;

for (; (dest[i] = src[j]) != '\0';)
	{
	i++;
	j++;
	}




return (dest);

}
