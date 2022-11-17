#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to list
 * Return: data sum
 */
int sum_listint(listint_t *head)
{
	int su;

	su = 0;

	if (!head)
	{
		return (su);
	}

	su = head->n + sum_listint(head->next);
	return (su);
}
