#include "lists.h"
/**
 * free_listint2 - free a list version 2.0
 * @head: pointer to head of list to free
 * Retunr: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if(*head == NULL)
		return;
	temp = *head;
	temp = temp->next;
	free_listint2(&temp);
	free(*head);
}
