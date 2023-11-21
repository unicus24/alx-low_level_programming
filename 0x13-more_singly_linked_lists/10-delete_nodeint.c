#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of a listint_t linked list.
 * @head: this is the pointer to the firs element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 (success), or -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tempPointer = *head;
	listint_t *currentNode = NULL;

	if (*head == NULL)
		return(-1);

	if (index == 0 )
	{
		*head = (*head)->next;
		free(tempPointer);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tempPointer || !(tempPointer->next))
			return (-1);
		tempPointer = tempPointer->next;
		j++;

	}

	currentNode = tempPointer->next;
	tempPointer->next = currentNode->next;
	free(currentNode);

	return (1);
}


