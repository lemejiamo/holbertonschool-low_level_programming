#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node to index possition
 * @h: pointer to pointer to head of a linked list
 * @n: value of data from new node
 * @idx: index to insert a new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *before = NULL, *after = NULL;
	unsigned int i = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	after = *h;
	for (; i != idx && after != NULL; i++)
	{
		before = after;
		after = after->next;
	}
	if (idx == 0)
	{
		new->next = (*h);
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	else if (i == idx && after != NULL)
	{
		new->next = after;
		new->prev = before;
		before->next = new;
		after->prev = new;
		return (new);
	}
	else if (i == idx)
	{
		new->next = NULL;
		new->prev = before;
		before->next = new;
		return (new);
	}
	return (NULL);
}
