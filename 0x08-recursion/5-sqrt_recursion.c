#include "holberton.h"

/**
 * checksquare -  search a natural square of a number
 * @count1: candidate to be a  natural square
 * @number: number to search a natural square
 * Return: integer
 */

int checksquare(int count1, int number)

{
if ((count1 * count1) == number)
	return (count1);
else if ((count1 * count1) > number)
	return (-1);
else
	return (checksquare(count1 + 1, number));
}
/**
 * _sqrt_recursion -  natural square root
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
return (checksquare(1, n));

}
