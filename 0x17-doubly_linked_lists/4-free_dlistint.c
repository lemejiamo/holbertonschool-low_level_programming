#include "lists.h"
/**
 * add_dnodeint_end - add node at end of a list
 * @head: pointer to head of list
 * @n: value in int node
 * Return: number of nodes printed
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *prev = NULL;
	/*memory assing */
	if (!head)
		exit(1);

	while (head->next != NULL)
	{
		head = head->next;
	}

    do{ 
    prev = head->prev;
    free(head);
    head = prev;
    prev = prev->prev;
    }while (prev->prev != NULL);
    free(head);
    free(prev);
}
