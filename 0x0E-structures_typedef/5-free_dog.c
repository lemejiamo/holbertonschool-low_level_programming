#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - frees dog
* @d: to structure
*/
void free_dog(dog_t *d)
{
free((*d).name);
free((*d).owner);
free(d);
}
