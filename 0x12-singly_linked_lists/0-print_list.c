#include "lists.h"

/**
* print_list - write in display the nodes
* @h: poniter to head of linked list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (!h->str) /* h->str == NULL */
		printf("[%d] %s\n", h->len, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
return (1 + print_list(h->next));
}
