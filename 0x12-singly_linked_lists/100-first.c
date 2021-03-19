#include <stdio.h>
/*  tortoise() is executed before main() */
void tortoise (void) __attribute__ ((constructor));


/* libre() is executed after main() */
void libre (void) __attribute__ ((destructor));



void tortoise(void)
{
	printf ("You're beat! and yet, you must allow,\n");
}


void libre(void)
{
	printf ("I bore my house upon my back!\n");
}
