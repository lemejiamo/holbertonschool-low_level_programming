#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: type char
 * @f: pointer to a funtion
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}

