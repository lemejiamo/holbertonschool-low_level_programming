#include "lists.h"
/**
 *print_listint - prints the number of nodes in a list
 *@h: pointer to list to count
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
/*	if (!h->n)*/
/*		printf("(nill)\n"); */
/*	else */
		printf("%d\n", h->n);

	return (1 + (print_listint(h->next)));
}
