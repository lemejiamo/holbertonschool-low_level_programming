# include <stdio.h>
# include <stdlib.h>

/*
 * main - el alfabeto en minuscula
 * Return: siempre 0
*/

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}

