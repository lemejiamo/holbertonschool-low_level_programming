#include "lists.h"
/**
 * print_dlistint - print n field to list
 * @h: pointer to head of list
 * Return: number of fields printed
 */
size_t print_dlistint(const dlistint_t *h)
{
  int i = 0;
  
  if (h == NULL)
    return (0);

  for (i = 0; h != NULL; i++)
  {
    printf("%d\n", h->n);
    h = h->next;
  }
  return (i);
}
