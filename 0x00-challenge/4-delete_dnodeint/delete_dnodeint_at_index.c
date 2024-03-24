#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)

		{
			(*head)->prev = NULL;
		}
		free(temp);
	}
	else
	{
		while (i < index && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}

		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
		if (temp->prev != NULL)
		{
			temp->prev->next = temp->next;
		}
		free(temp);
	}
	return (1);
}
