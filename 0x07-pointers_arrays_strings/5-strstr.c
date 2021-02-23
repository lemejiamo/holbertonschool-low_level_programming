#include "holberton.h"

/**
 * _strstr - coincidence or not
 * @haystack:string to analice
 * @needle: string to find
 * Return: pointer  to p
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
char *p;

for (; needle[i] != '\0'; i++)
	{
	if (haystack[j] == '\0')
		return (p = &haystack[j]);

	for (; haystack[j] != '\0'; j++)
		{
		if (needle[i] == haystack[j])
			{
			j++;
			break;
			}
		else
			i = 0;
		}
	}
j -= i;
p = &haystack[j];
return (p);
}
