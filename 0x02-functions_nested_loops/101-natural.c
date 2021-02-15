#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	int suma, numero;

	suma = 0;
	for (numero = 0; numero < 1025; numero++)
	{
		if (((numero % 3) == 0) || ((numero % 5) == 0))
			suma = suma + numero;
	}
	printf("%d\n", suma);
	return (0);
}
