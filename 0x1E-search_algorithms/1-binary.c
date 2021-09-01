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
 * _binary_search - search a value in a array with binary method
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * @possition: possition in the found value
 * Return: the possition were the item was found or -1 if not found
 */
int _binary_search(int *array, size_t size, int value, size_t possition)
{
	size_t index = 0;
	int *_array;

	if (array == NULL || size == 0 || value == '\0')
		return (ARGS_FAIL);

	print_array(array, size);

	if (size % 2 == 0)
		index = (size / 2) - 1;
	else
		index = (size / 2);

	possition = possition + index + 1;

	if (value == array[index])
		return (possition - 1);

	if (value > array[index])
	{
		_array = &array[index + 1];
		return (_binary_search(_array, (size - (index + 1)), value, possition));
	}
	if (value < array[index])
		return (_binary_search(array, index, value, (possition - index)));

	return (NOT_FOUND);
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
	return (_binary_search(array, size, value, 0));
}
