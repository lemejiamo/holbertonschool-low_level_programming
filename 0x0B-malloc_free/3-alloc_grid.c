#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Name function
 * @width: whidth array
 * @height: height array
 * Return: Value array
 */
int **alloc_grid(int width, int height)
{
	int **intarray, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	intarray = malloc(sizeof(int *) * height);
	if (intarray == NULL)
	{
		free(intarray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		intarray[i] = malloc(sizeof(int) * width);
		if (intarray[i] == NULL)
		{
			for ( ; i >= 0; i--)
			{
				free(intarray[i]);
			}
			free(intarray);
			return (NULL);
		}
	}
	return (intarray);
}
