#include "lists.h"
/**
 * get_nodeint_at_index - return a node at the nth index
 * @head: first node in the list
 * @index: the nth index of node to be retrieved
 * Return: address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (count < index)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		count++;
	}
	return (current);
}
