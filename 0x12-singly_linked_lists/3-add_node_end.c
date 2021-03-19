#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node_end - add node to the end of linked lists
* @head: pointer to pointer of head of the list
* @str: string to fill the node
* Return: the addres of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0, i = 0;
	list_t *newnode = NULL, *temp = NULL;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
		newnode->str = "(nil)";
/* cuenta el largo de la cadena */
	while (!str[i])
	{
		len += 1;
	}
/* se asigna el tamaño a la posicion newnode->len */
	newnode->len = len;
/* se asigna  la ultima posicion al nodo */
	newnode->next = NULL;
/* validacion del valor de la cabeza */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
/* asigna espacio de memoria para el puntero temporal */
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
/* se inicia la busqueda desde la cabeza */
		temp = *head;
		for (temp = *head; temp->next != NULL;)
		{
		temp = temp->next;
		}
	temp->next = newnode;
	return (newnode);
	}
}
