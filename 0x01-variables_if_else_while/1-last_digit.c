#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - revisando el cociente
 * Return: siempre 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int r;

	r = n % 10;
	if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r <= 5)
	{
		printf("Last digit of %d is  %d and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
