#include <stdio.h>
/**
 *main - function
 *Return: None
 */
int main(void)
{
	const long prime[] = "612852475143";
	long j = prime;
	long i;

	do {
		i = 2;
		while (j % i != 0)
			i++;
		j /= i;
	}

	while (j != 1);
	printf("%ld\n", i);

	return (0);
}