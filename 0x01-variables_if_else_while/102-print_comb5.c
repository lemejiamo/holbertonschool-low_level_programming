#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int num0, num1;

	for (num0 = 0; num0 < 99; num0++)
	{
		for (num1 = (num0 + 1); num1 < 100; num1++)
		{
			putchar ((num0 / 10) + '0');
			putchar ((num0 % 10) + '0');
			putchar (' ');
			putchar ((num1 / 10) + '0');
			putchar ((num1 % 10) + '0');
			if (num0 != 98 || num1 != 99)
			{
				putchar (',');
				putchar (' ');
			}

		}
	}
	putchar ('\n');
	return (0);
}
