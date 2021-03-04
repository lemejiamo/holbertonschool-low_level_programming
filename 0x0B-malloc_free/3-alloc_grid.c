#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - fill a grid using malloc
* @width: width
* @height: height
* Return: pointer or null
*/

int **alloc_grid(int width, int height)
{
int **array, i;

if (height <= 0 || width <= 0)
	return (NULL);

array = malloc(height * sizeof(int *));

if (array == NULL)
	{
	free(array);
	return (NULL);
	}

for (i = 0; i < height; i++)
	{
	array[i] = malloc(width * sizeof(int *));
	if (array[i] == NULL)
		{
		for ( ; i >= 0 ; i--)
			{
			free(array[i]);
			}
		free(array);
		return (NULL);
		}
	}
return (array);
}
