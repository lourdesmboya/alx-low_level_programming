#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
	size++;
	h = h->next;
	}
	return (size);
}
