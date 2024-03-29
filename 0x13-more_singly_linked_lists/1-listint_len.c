#include "lists.h"

/**
 * listint_len -> Fx that returns the number of an element
 *in a linked listint_t list.
 * @h: A pointer address at the head of list
 * Return: the number of element in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
