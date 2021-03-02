#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  duplicate a string
 * @str: string
 * Return: pointer to dup or null
 */
char *_strdup(char *str)
{
char *dup;
int i = 0;
int j = 0;

if (!str)
	return (NULL);

while (str[i] != NULL)
	{
	i++;
	}

dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
	return (NULL);

for ( ; j <= i; j++)
	{
	dup[j] = str[j];
	}
return (dup);

}
