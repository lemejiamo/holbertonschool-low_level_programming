#include "lists.h"
/**
 *add_nodeint - add node to linked list
 *@head: pointer to address of head of list
 *@n: data to node
 *Return: Addres of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
