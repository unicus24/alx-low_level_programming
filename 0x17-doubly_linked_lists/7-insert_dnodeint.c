/**
 * Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *auxNode = *h, *newNode;
	unsigned int index, cont = 0;

	/* create node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (*h);
	}

	/* search of position to insert */
	index = idx - 1;
	while (auxNode && cont != index)
	{
		cont++;
		auxNode = auxNode->next;
	}

	/* general case */
	if (cont == index && auxNode)
	{
		newNode->prev = auxNode;
		newNode->next = auxNode->next;
		if (auxNode->next)
			auxNode->next->prev = newNode;
		auxNode->next = newNode;
		return (neWNode);
	}
	free(newNode);
	return (NULL);
}
