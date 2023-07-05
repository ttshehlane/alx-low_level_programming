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
	listint_t *current, *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && count < idx -1)
	{
		current = current->next;
		count++;
	}
	if (current != NULL)
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
