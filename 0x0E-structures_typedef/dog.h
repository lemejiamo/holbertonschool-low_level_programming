#ifndef DOG_H
#define DOG_H

/**
* struct dog - name of structure
* @name: Doggy name
* @age: age of a dog
* @owner: really this need a explanation??
*/
struct dog
{

	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif