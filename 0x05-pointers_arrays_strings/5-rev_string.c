#include "holberton.h"
/**
 * rev_string - ver gnirts
 * @s: string
 * Return: none
 */

void rev_string(char *s)

{
int n, p;
char  r[20];
n = 0;
p = 0;
	while (s[n] != '\0')
		{
		n++;
		}
n--;
	while (n >= 0)
		{
		r[p] = s[n];
		n--;
		p++;
		}
n = 0;
p = 0;
	while (s[n] != '\0')
		{
		s[n] = r[p];
		n++;
		p++;
		}
}
