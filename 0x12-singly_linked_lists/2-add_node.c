#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - add a node to linked list
* @head:pointer to a pointer head of linked list
* @str: string to add a node
* Return: direction to the head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}