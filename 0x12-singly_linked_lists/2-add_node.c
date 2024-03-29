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
list_t *newnode;
int i = 0, len = 0;

newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
for (; str[i]; len++, i++)
{}
newnode->len = len;
newnode->next = *head;
*head = newnode;
return (newnode);
}
