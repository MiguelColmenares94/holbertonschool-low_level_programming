#include "lists.h"

/**
 * insert_nodeint_at_index - add node in any position
 * @head: head node
 * @idx: index to add the new node
 * @n: new pointer value
 * Return: created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_head, *p_node, *n_node;
	unsigned int ctr;

	if (!*head && idx > 0)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	aux_head = *head;
	while (aux_head)
	{
		if (ctr == idx)
			n_node->next = aux_head;
			p_node->next = n_node;
			return (n_node);
		p_node = aux_head;
		aux_head = aux_head->next;
		ctr++;
	}
	if (ctr == idx)
		p_node->next = n_node;
		return (n_node);
	free(n_node);
	return (NULL);
}
