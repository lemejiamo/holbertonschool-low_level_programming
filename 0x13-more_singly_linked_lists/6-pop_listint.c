#include "lists.h"
/**
 * pop_listint - deletes a head of list
 * @head: pointer to head of list
 * Return: 0 succes -1 error
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	temp = *head;
	data = temp->n;
	*head = (*temp).next; /* asignamos la nueva cabeza */
	free(temp);
	return (data);
}
