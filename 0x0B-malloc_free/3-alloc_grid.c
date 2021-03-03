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
int **array;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

array = (int **)malloc(width * sizeof(int *));
if (array == NULL)
	return (NULL);

for (i = 0; i < width; i++)
	{
	array[i] = malloc(height * sizeof(int));
	if (array[i] == NULL)
		{
		for (j = i ; j >= 0 ; j--)
			{
			free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
for (i = 0; i < width; i++)
	{
	for (j = 0; j < height; j++)
		array[i][j] = 0;
	}
return (array);
}
