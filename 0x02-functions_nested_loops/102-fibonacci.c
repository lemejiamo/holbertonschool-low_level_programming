#include <stdio.h>
/**
 * main - print fibonacci sequence
 * Return: no way
 */

int main(void)
{
long int number1, number2, resultado, contador;
	number1 = 0;
	number2 = 1;
	contador = 0;
	do {
		resultado = number1 + number2;
		contador++;
		number1 = number2;
		number2 = resultado;
		printf("%ld", resultado);
		if (contador != 50)
			printf(", ");
	} while (contador < 50);
putchar ('\n');
}
