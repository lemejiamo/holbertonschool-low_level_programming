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

if (height <= 0 || width <= 0)
	return (NULL);

array = malloc(height * sizeof(int *));
if (array == NULL)
	return (NULL);

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
for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
		array[i][j] = 0;
	}
array[i][j] = '\0';
return (array);
}
