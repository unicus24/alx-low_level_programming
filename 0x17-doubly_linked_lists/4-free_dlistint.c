/**
 * Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);
 */




#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actualNode;
	dlistint_t *nextNode;

	if (head)
	{
		actualNode = head;
		nextNode = head->next;
		while (nextNode)
		{
			free(actualNode);
			actualNode = nextNode;
			nextNode = nextNode->next;
		}
		free(actualNode);
	}
}
