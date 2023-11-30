#include "lists.h"
/**
 * free_list - deallocates list from memory
 * @head: pointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *last = head, *tmp;

	while (last != NULL)
	{
		tmp = last;
		last = last->next;
		free(tmp);
	}
	head = NULL;
}
