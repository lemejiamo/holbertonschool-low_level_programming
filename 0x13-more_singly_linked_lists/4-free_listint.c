#include "lists.h"
/**
 *free_listint - free all malloc allocation
 *@head: pointer to head of the list
 *Return: none
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
