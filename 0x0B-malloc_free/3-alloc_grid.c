#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*/

int **alloc_grid(int width, int height)
{

int **array;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

array = malloc(width * sizeof(int *));

if(array == NULL)
	return (NULL);

for (i = 0; i < width; i++)
	{
	array[i] = malloc(height * sizeof(int));
	if(array[i] == NULL)
        	return (NULL);	
	}

/* 2do paso rellenamor arreglo */

for(i = 0; i < width; i++)
		{
		for(j = 0; j < height; j++)
			array[i][j] = 0;
		}
return(array);
}
