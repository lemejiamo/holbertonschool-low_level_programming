#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the arguments in a  funtion
 * @n: arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int suma = 0, i = 0;
va_list ap;


va_start(ap, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		suma += va_arg(ap, unsigned int);
	}
va_end(ap);

return (suma);

}
