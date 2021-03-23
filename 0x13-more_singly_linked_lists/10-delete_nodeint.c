#include "lists.h"
/**
* delete_nodeint_at_index - DELETE A NODE
* @head: pointer to pointer a head of a list
* @index: position to delete
* Return: 1 if success -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp = NULL,  *before = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		if (i + 1 == index - 1)
			before = temp->next;
		temp = temp->next;
	}

	before->next = temp->next;

	free(temp);
	return (1);
}
