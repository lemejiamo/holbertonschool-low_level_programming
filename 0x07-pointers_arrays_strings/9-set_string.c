#include "holberton.h"
/**
 *set_string - sets the value of pointer to a char
 *@s: pointer char s
 *@to: pointer char to
 *Return: value of pointer to pointer of s
 */
void set_string(char **s, char *to)
{
	int i = 0;

	for (; s[i] != to; i++)
	{
		s[i] = to;
	}
}
