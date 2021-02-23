#include "holberton.h"

/**
 * _strspn - search for coincidences
 * @s: string to read
 * @accept: chars to search
 * Return: the count
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, c;
j = c = 0;
for (i = 0; s[i] != '\0'; i++)
	{

	if (accept[j] == '\0')
		{
		return (c);
		}

	for (j = 0; accept[j] != '\0'; j++)
		{
		if (accept[j] == s[i])
			{
			c += 1;
			break;
			}
		}
	}
return (c);
}
