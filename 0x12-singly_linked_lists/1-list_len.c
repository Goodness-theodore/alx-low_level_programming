#include <stdlib.h>
#include "lists.h"

/**
* list_len - Returns the number of elements
* @h: pointer to the list_t list
*
* Return: Number of elements in h
*/
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}
