#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at a given position
 * @head: head pointer pointer
 * @idx: index where the node is to be added
 * @n: data of node
 * Return: node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous, *current, *new_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	while (count < idx)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			break;
		count++;
	}
	if (current != NULL)
	{
		new_node->next = previous->next;
		previous->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
