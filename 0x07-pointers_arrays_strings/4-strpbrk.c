#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk - functions search a string of set bytes
 *@s: pointer to char s
 *@accept: value a remplace
 *Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, l = 0;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				while (l < i)
				{
					l++;
					s++;
				}
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
