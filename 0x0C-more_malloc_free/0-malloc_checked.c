#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(b);
if (p == '\0')
	exit (98);
return (p);
}
