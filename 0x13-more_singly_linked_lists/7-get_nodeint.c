#include "lists.h"
/**
 * get_nodeint_at_index - get the node data from  specific position
 * @head: poniter to head of a list
 * @index: the position to read
 * Return: data from index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp;

	temp = head;

	for (; counter != index; counter++)
	{
		temp = temp->next;
	}
	return (temp);
}
