#include "search_algos.h"
#define NOT_FOUND -1
#define ARGS_FAIL -1

/**
 * print_array - print a array
 * @array: pointer to array to print
 * @size: size of array to print
 */
void print_array(int *array, size_t size)
{
	size_t j = 0;

	printf("Searching in array: ");

	for (j = 0; j != size; j++)
	{
		if ((j + 1) == size)
			printf("%d\n", array[j]);
		else
			printf("%d, ", array[j]);
	}
}

/**
 * binary_search - search a value in a array with binary method
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: the possition were the item was found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0 || value == '\0')
		return (ARGS_FAIL);

	print_array(array, size);

	if (size % 2 == 0)
		i = size / 2;
	else
		i = (size / 2) + 1;

	if (value == array[i])
		return (i);

	if (value > array[i])
		return (binary_search(&array[i], (size - i), value));

	if (value < array[i])
		return (binary_search(array, (i - 1), value));

	return (NOT_FOUND);
}
