#include "lists.h"
/**
 *add_node_end - add node  at the end of linked list
 *@head: pointer to head of list
 *@n: data to write in a node
 *Return: the address of new node NULL if failes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *temp = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	 newnode->n = n;
	 newnode->next = NULL;
	 if (*head == NULL)
	 {
		 *head = newnode;
		 return (newnode);
	 }
	 for(temp = *head; temp->next != NULL;)
	 {
		 temp = temp->next;
	 }
	 temp->next = newnode;
	 return (newnode);
}
