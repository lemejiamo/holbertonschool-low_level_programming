#include "holberton.h"

/**
 * *string_toupper - change a string lower to upper
 *
 * Return: char
 */

char *string_toupper(char *string)
{

int i;

for (i = 0; string[i] != '\0'; i++)
	if (string[i] >= 'a' && string[i] <= 'z')
		{
		string[i] = string[i] - 32;
		}
return (string);
}
