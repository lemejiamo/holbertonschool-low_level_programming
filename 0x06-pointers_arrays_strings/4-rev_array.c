#include "holberton.h"
/**
 * reverse_array - that says everything
 * @a: array to reverse
 * @n: size of array
 * Return: none
 */
void reverse_array(int *a, int n)
{

int i ; /*  initial position */
int tmp; /* swap */
int middle = 0; /* middle from  array */


middle = (n / 2);

for (i = 0 ; i < middle && n-- > middle ; i++)
	{
	tmp = a[i]; /* sends the position to the tmp */
	a[i] = a[n]; /* swap position j with a */
	a[n] = tmp; /* send tmp to j position */
	}
}
