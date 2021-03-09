#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints the info about dog
* @d: a pointer to dog info
* Return: None
*/
void print_dog(struct dog *d)
{
if (d != '\0')
{
	if ((*d).name != '\0')
	{
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("nil\n");
	}

	if ((*d).age != '\0')
	{
		printf("Age: %f\n", (*d).age);
	}
	else
	{
		printf("nil\n");
	}
	if ((*d).owner != '\0')
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("nil\n");
	}

}
}

