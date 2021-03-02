#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *create_array -  create a array
* @size: size of  array
* @c: char to fill array
* Return: pointer - or null
*/

char *create_array(unsigned int size, char c)
{

unsigned int i = 0;
char  *array;
array = (char *) malloc(sizeof(int) * size);

if (array == NULL)
	{
	printf("Can't allocate %d bytes \n", size);
	return ('\0');
	}


if (!size)
return ('\0');
	for (; i < size; i++)
		{
		array[i] = c;
		}
return (array);
}

