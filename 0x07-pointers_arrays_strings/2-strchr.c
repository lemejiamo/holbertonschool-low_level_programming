#include "holberton.h"

/**
 * *_strchr -  find a firs coincidence char
 * @s: string to analice
 * @c: char to find
 * Return: pointer to found char
 */

char *_strchr(char *s, char c)
{
char *f;
int i;

i = 0;
while (s[i] != '\0')
	{
	if (s[i] == c)
		{
		f = &s[i];
		break;
		}
	i++;
	}
if (s[i] == '\0')
	f = &s[i];
return (f);
}
