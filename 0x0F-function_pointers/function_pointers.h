#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdio.h>

/* int int_index(int *array, int size, int (*cmp)(int));*/

void print_name(char *name, void (*f)(char *));

#endif
