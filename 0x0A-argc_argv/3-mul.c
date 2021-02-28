#include <stdlib.h>
#include <stdio.h>
/**
 * main - the funtion
 * @argc: integer
 * @argv: string
 * Return: a integer
 */
int main(int argc, char *argv[])
{
int resultado;

if (argc > 3 || argc < 3)
	{
	printf("Error\n");
	return (1);
	}
else
	{
	resultado = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", resultado);
	}
return (0);
}
