#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: type char
 * @f: pointer to a funtion
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
