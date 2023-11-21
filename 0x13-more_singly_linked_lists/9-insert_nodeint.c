#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newNode;
	listint_t *tempPointer = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (j = 0; tempPointer && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newNode->next = tempPointer->next;
			tempPointer->next = newNode;
			return (newNode);
		}

		else
			tempPointer = tempPointer->next;
	}

	return (NULL);
}

