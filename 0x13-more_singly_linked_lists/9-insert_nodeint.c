#include "lists.h"
/**
 *insert_nodeint_at_index - insert node in specific position
 *@head: pointer to´pointer head
 *@idx: index
 *@n: data to new node
 *Return: address of newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newnode = NULL, *temp = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free (newnode);
		return (NULL);
	}
	newnode->n = n;
	if(idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	for (; idx > 1; idx--)
	{
		temp = (temp)->next;
		if (temp == NULL)
			return (NULL);
        }
	newnode->next = temp->next;
	(temp)->next = newnode;
	return (newnode);
}
