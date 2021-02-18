#include "holberton.h"

/**
 * *_strcpy - copy string
 * @dest: destiny
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{

int i, t;
i = 0;
while (src[i] != '\0')
        {
        i++;
        }
t = i;

for ( i = 0; i <= t; i++)
        {
        dest[i] = src[i];
        }
return (dest);
}
