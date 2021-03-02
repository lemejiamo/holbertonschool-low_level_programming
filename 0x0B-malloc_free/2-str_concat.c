#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{

/* declaracion de las variable */

int i, j, k, l = 0;
char *concatenado;


/* caso especial si alguna de las cadenas es igual a NULL */

/* if (*s1 == '\0' || *s2 == '\0') */
/*	return (NULL); */

/* 1er paso leer el tamaño de las cadenas */

for (i = 0; s1[i] != '\0'; i++)
	{}

for (j = 0; s2[j] != '\0'; j++)
	{}

/* 2do paso asignar el tamaño al concatenado */

concatenado = malloc(sizeof(char) * (i + j + 1));


/* 3er paso escribir las cadenadas en el nuevo array */

for (k = 0; k <= i; k++)
	{
	concatenado[k] = s1[k];
	}

for (; k <= (i +j); k++, l++)
	{
	concatenado[k] = s2[l];
	}

concatenado[k + 1] = '\0';
return (concatenado);

}
