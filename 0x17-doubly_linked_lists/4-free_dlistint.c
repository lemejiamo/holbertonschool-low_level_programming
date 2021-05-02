#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = NULL;
	/*memory assing */
	if (!head)
		exit(1);

	while (head->next != NULL)
	{
		head = head->next;
	}

	do {
		prev = head->prev;
		free(head);
		head = prev;
		prev = prev->prev;
	} while (prev->prev != NULL);
	free(head);
	free(prev);
}
