#include "search_algos.h"

/**
 * linear_search - search a value in a array in linear order
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the possition were the item was found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0 || value == '\0')
		return (-1);

	for (i = 0; array[i] != '\0' && size != i; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
