#include "lists.h"
#include <stdio.h>
/**
* list_len - counting of nodes in a linked list
* @h: pointer to head of liked
* Return: the count of nodes
*/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
return (1 + list_len(h->next));
}
