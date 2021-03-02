#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)


{

char *dup; /*declaramos el puntero que va ser la copia */
int i = 0;
int j = 0; /* iniciamos la variable que nos sirve de indice para hacer la copia */

		/*1er paso contar la cadena dada */
		/* ciclo para contar el largo de la cadena */
while (str[i] != '\0')
	{
	i++;
	}


				/* 1er caso cuaanod la cadena esta vacia */
if (!str) 			/* str == 0 */
	return ('\0');

/* 2do caso cadena contiene un valor */

dup = malloc(sizeof(char) * (i + 1)); 	/* asignamos el tañomaño con mallox */

for ( ; j <= i; j++)
	{
	dup[j] = str[j];
	}
return (dup);
}
