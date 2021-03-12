#include "variadic_functions.h"
/**
 * print_numbers - print numbers with separator
 * @separator: separator ", "
 * @n: number of args
 * Returns: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list(ap);

va_start(ap, n);

	if (separator == NULL)
	{

		for (; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(ap, unsigned int));
			else
				printf("%d", va_arg(ap, unsigned int));
		}

	}
	else
	{
		for (; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d\n", va_arg(ap, unsigned int));
			else
				printf("%d%s", va_arg(ap, unsigned int), separator);
		}
	}
va_end(ap);

}
