#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a listint_t list.
 * @head: this is the pointer to the first node in the list
 * @n: this is the data to be inserted in the new code
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n) /*defines the function that takes a pointer to 'listint_t' ('head') and an integer 'n' as parameters. it indicates that the function will return a pointer to 'listint_t'*/
{
	listint_t *newNode; /* declare a pointer 'newNode' of type 'listint_t'. this pointer will be used to create and manage the new node to be added to the list*/

	newNode = malloc(sizeof(listint_t)); /* allocate memory for a new node equal to the size of 'listint_t. it also assigns the address of this allocated memory to the 'newNode' pointer.*/
	if (!newNode)
		return (NULL); /*this line checks if the allocation was successful. if the 'newNode' is NULL, which indicates memory allocation failure, the function returns NULL*/

	newNode->n = n; /* sets the 'n' field of the newly created node newNode to the balue passed as the argumet to the function 'n'*/
	newNode->next = *head; /* sets the 'next' pointer of the new code to point to the current head of the list*/
	*head = newNode; /* update the 'head' pointer to point to the newly created node*/

	return (newNode);
}

