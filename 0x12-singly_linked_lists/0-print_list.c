#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer of struct
 * Return: Number of element long
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
