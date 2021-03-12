#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: formato
 */
void print_all(const char * const format, ...);
{

va_list(ap);
unsigned int i;
char *str;

va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *)
		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator)
	}
va_end(ap);
printf("\n");
}
