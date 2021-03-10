#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - read every element in array  as a parameter
* @array: pointer to array
* @size: dimmension
* @action: funtion pointer
* Return: none
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
for (; i < size; i++)
	{
	(*action)(array[i]);
	}
}
