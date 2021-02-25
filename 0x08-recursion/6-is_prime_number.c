#include "holberton.h"

/**
 * check -  checks if a number is  prime
 * @m: divisor
 * @n: number to check
 * Return: a integer
 */


int check(int m, int n)
{
if ((n % m) != 0)
	{
	if (m > (n / 2))
		{
		return (1);
		}
	return (check(m + 2, n));
	}
return (0);
}


/**
 * is_prime_number - checks if a number is prime
 * @n: intger to evaluate
 * Return: 1 is prime or 0 is not
 */
int is_prime_number(int n)

{

if (n <= 1)
	return (0);

if ((n % 2) == 0)
	return (0);

return (check(3, n));

}

