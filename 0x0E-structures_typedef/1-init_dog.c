#include "dog.h"
/**
* init_dog - mi first doggy
* @d: name of
* @name: name of Doggy
* @age: age of doggy
* @owner: owner of a doggy
* Return: none
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != '\0')
{
	d->name = name; /* (*d).name */
	d->age = age;   /* (*d).age */
	d->owner = owner; /* (*d).owner */
}
}
