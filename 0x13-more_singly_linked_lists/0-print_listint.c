#include "lists.h"

/**
 * print_list - prints all the elements of a list and num elements
 * @h: pointer of a node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
