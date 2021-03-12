#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of args to print
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *ch;
va_list(ap);

va_start(ap, n);

		for (; i < n; i++)
		{
		ch = va_arg(ap, char *);

			if (ch == NULL)
			{
				printf("(nil)");
			}

		printf("%s", ch);

			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
va_end(ap);
printf("\n");

}
