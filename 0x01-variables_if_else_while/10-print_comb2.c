# include <stdio.h>

/*
 * main -  second part is better
 * Return: 0
*/

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar(n/10 + '0');
		putchar(n%10 + '0');
		if (n <= 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
