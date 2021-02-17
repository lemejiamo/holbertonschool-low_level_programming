#include "holberton.h"


/**
 * puts_half - puts_half2
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
int n, mitad; n = 0; while (str[n] != '\0') // saco el largo de la cadena
{
n++;
}
if ( n % 2 == 0) // establecer el punto medio para iniciar la impresion
{
            mitad = n /2; // si es par
        else // si es impar
            {
            mitad = ( n - 1 ) / 2;
            mitad++;
            }
for (mitad ; mitad <= n; mitad++) // desde la amitad empiezo a imprimir la cadena
        {
        putchar(str[mitad]);
        }
putchar('\n');
}
