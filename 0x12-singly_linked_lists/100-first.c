#include <stdio.h>
/**
 * tortoise - constructor before main
 * Return: void
 */
void tortoise(void) __attribute__ ((constructor));

void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
