#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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

(*dog).name = name;
(*dog).age =  age;
(*dog).owner =  owner;

return (dog);
}

