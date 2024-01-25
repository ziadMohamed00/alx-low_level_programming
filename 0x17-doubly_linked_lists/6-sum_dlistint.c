#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data of a linked list.
 * @head: pointer to current head node
 *
 * Return: int sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
