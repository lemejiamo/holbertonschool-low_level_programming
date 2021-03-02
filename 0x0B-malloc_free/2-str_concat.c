#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: Pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, l = 0;
char *conc;

if (*s1 == '\0')
	s1 = "";
if (*s2 == '\0')
	s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{}

for (j = 0; s2[j] != '\0'; j++)
{}

conc = malloc(sizeof(char) * (i + j + 1));
if (conc == NULL)
	return (NULL);

for (k = 0; k < i; k++)
	{
	conc[k] = s1[k];
	}
for (; k <= (i + j); k++, l++)
	{
	conc[k] = s2[l];
	}
return (conc);
}
