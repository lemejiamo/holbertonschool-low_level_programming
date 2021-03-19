#include "lists.h"

/**
 * free_list - free list
 *@head: pointer to node structure to fre
 *return: none
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
