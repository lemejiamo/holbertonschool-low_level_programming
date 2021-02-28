#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main funtion
 * @argc: integer
 * @argv: string
 * Return: sum  or error
 */


int main(int argc, char *argv[])
{
int i = 1, resultado = 0, analisis = 0;
char *consta;

if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

do {
	consta = argv[i];

	if ( *consta  == 48)
		{
		resultado += 0;
		}

	else
		{
		analisis = atoi(argv[i]);
			if (analisis == 0)
				{
				printf("Error\n");
				return (1);
				}
			else
				resultado += analisis;

		}
	i++;

} while (i < argc);

printf("%d\n", resultado);
return (0);
}

