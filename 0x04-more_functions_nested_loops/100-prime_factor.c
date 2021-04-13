#include <stdio.h>
/**
 *main - entry point
 *Return: None
 */
int main(void)
{
	unsigned long j = 612852475143;
	long i;

	do
	{
		i = 2;
		while (j % i != 0)
			i++;
		j /= i;
	}

	while (j != 1);
	printf("%ld\n", i);

	return (0);
}