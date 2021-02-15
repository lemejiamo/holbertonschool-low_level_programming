#include <stdio.h>
/**
 * main - print fibonacci sequence
 * Return: no way
 */

int main(void)
{
long int number1, number2, resultado, contador, suma;
number1 = 0;
number2 = 1;
contador = 0;
suma = 0;
do {
	resultado = number1 + number2;
	contador++;
	number1 = number2;
	number2 = resultado;
	if ((resultado % 2) == 0)
	{
		suma = suma + resultado;
	}
} while (contador < 39);
printf("%ld", suma);
putchar ('\n');
return (0);
}
