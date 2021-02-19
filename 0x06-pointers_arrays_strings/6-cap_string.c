#include "holberton.h"
/**
 * *cap_string - strin to cap
 * @string: string to cap
 * Return: char
 */

char *cap_string(char *string)
{
int i = 0;

while (string[i] != '\0')
{
	if (string[i] == 0)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
		string[i + 1] = (string[i + 1] - 32);
		}
	}

	if (string[i] == '\t' || string[i] == '\n' || string[i] == ' '
	    || string[i] == ',' || string[i] == ';' || string[i] == '.'
	    || string[i] == '!' || string[i] == '?' || string[i] == '\"'
	    || string[i] == '(' || string[i] == ')' || string[i] == '{'
	    || string[i] == '}')
	{
		if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
		{
			string[i + 1] = (string[i + 1] - 32);
		}
	}
	i++;
}
return (string);
}
