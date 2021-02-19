#include "holberton.h"

/**
 *  *rot13 - change the chars
 * @rot13: the string of change
 * Return: char
 */

char *rot13(char *rot13)
{

int i, j;

char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char new[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; rot13[i] != '\0'; i++)
		{
		for (j = 0; src[j] != '\0'; j++)
			{
			if (src[j] == rot13[i])
				{
				rot13[i] = new[j];
				break;
				}
			}

		}
return (rot13);
}
