#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints the info about dog
* @d: a pointer to dog info
* Return: None
*/
void print_dog(struct dog *d)
{
if(d != '\0')
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n",(*d).owner);
}
}

