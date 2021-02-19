#include "holberton.h"

/**
 *  *leet - change the chars
 * @leet: the string of change
 * Return: char
 */

char *leet(char *leet)
{

int i, j;

char src[] = "aAeEoOtTlL";
char new[] = "4433007711";

	for (i = 0; leet[i] != '\0'; i++)
		{
		for (j = 0; src[j] != '\0'; j++)
			{
			if (src[j] == leet[i])
				{
				leet[i] = new[j];
				break;
				}
			}

		}
return (leet);
}
