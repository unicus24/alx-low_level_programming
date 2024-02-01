/**
 * Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxNode = *head;
	dlistint_t *nodeToDelete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = nodeToDelete->next;
		free(nodeToDelete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (auxNode && cont != idx)
	{
		cont++;
		auxNode = auxNode->next;
	}

	/* general case */
	if (cont == idx && auxNode)
	{
		nodeToDelete = auxNode->next;
		if (nodeToDelete->next)
		nodeToDelete->next->prev = auxNode;
		auxNode->next = nodeToDelete->next;
		free(nodeToDelete);
		return (1);
	}

	return (-1);
}
