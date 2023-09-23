#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the linked list
 * @head: The list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *rand;

	while (head)
	{
		rand = head->next;
		free(head->str);
		free(head);
		head = rand;
	}
}
