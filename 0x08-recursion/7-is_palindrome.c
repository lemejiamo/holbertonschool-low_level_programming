#include "holberton.h"
/**
 * _strlen_recursion - strength of a string
 * @s: string to read
 * Return: integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindromerecursive - recursive
 * @s: string
 * @length: length
 * Return: integer
 */
int is_palindromerecursive(char *s, int length)
{
if (s[0] != s[length])
	return (0);
else if (length <= 1)
	return (1);
else
return (is_palindromerecursive(s + 1, length - 2));
}

/**
* is_palindrome - palindrome
* @s: string
* Return: integer
*
*/

int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (is_palindromerecursive(s,  length - 1));
}
