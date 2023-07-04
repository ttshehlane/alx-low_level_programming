#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
