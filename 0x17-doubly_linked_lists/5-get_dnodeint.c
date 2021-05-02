#include "lists.h"
/**
 * get_dnodeint_at_index - get node of a list
 * @head: pointer to head of list
 * @index: index to get
 * Return: value of node get it
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	do {
		head = head->next;
		if (head->next == NULL)
		{
			if (i + 1 < index)
				return (NULL);
			else
				return (head);
		}
		i++;
	} while (i < index);
	return (head);
}
