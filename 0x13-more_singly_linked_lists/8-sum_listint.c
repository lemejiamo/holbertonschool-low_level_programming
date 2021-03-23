#include "lists.h"
/**
 *sum_listint - sum
 *@head: pointer to head of a list
 *Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	sum = (*head).n;
	head = head->next;
	return (sum + (sum_listint(head)));

	return (sum);
}
