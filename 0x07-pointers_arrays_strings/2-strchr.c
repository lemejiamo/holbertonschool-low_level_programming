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

for (i = 0; s[i] != c || s[i] == '\0'; i++)
	{}
f = &s[i];
return (f);
}
