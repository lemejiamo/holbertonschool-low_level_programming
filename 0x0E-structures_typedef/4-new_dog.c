#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
 * *_strdup -  duplicate a string
 * @str: string
 * Return: pointer to dup or null
 */
char *_strdup(char *str)
{
char *dup;
int i = 0;
int j = 0;

if (!str)
        return (NULL);

while (str[i] != '\0')
        {
        i++;
        }

dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
        return (NULL);

for ( ; j <= i; j++)
        {
        dup[j] = str[j];
        }
return (dup);
}
/**
 * new_dog - input data
 * @name:name of a dog
 * @age: age of a dog
 * @owner:owner of a dog
 * Return: pointer to a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);

(*dog).name = _strdup(name);
if((*dog).name == NULL)
	{
		free((*dog).name);
		return (NULL);
	}

(*dog).age =  age;

(*dog).owner = _strdup(owner);
if((*dog).owner == NULL)
	{
		free((*dog).owner);
		return (NULL);
	}
return (dog);
}

