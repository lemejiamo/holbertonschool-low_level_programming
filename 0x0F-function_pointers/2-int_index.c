#include "function_pointers.h"

/**
 * int_index - search for a integer
 * @array: array into search
 * @size: size of array
 * @cmp: pointer to a funtion
 * Return: index  to firts coincidence
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int i = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i < size ; i++)
		{
		if ((*cmp)(array[i]))
			{
			return (i);
			}
		}
return (-1);
}
