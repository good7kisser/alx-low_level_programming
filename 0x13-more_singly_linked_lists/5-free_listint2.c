#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: a pointer to the head of the list
 * created by: goof7kisser
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
