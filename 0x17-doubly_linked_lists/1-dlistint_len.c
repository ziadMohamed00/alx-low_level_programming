#include "lists.h"

/**
 * dlistint_len - prints number of elements
 * @h: address of head node
 *
 * Return: size of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
