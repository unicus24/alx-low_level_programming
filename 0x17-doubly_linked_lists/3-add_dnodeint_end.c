#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		newNode->prev = aux;
		aux->next = newNode;
	}
	else
	{
		*head = newNode;
		newNode->prev = NULL;
	}

	return (newNode);
}
