#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: integer value to insert in the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n) /* function that takes a pointer to a pointer to listint_t (head) and an integer n as parameters. the fuction will return a pointer to listint_t */
{
	/* declare two pointers of listint_t.*/
	/* temp is initialized with the value of *head which is the pointer to the first element of the list */
	listint_t *newNode;
	listint_t *temp = *head;

	/* allocate memory for a new nodeequal to the size of listint_t*/
	/* assign the address of this allocated memory to the newNode pointer*/
	/*if allocation fails when newNode is null then function returns null*/

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	/* set the n field of the newNode to the value passed as the argument to the fucntion n*/
	/* set the 'next' pointer of newNode to NULL as this node will be inserted at end list*/

	newNode->n = n;
	newNode->next = NULL;

	/* check if the list is empty */
	/* if the head is NULL, meaning the list is empty, the head pointer is updated to point the newNode */

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	/* transverse the list to find the last node */
	/* the function continues moving to the next node 'temp->next' */
	/* until it reaches the last node indicated by 'temp->next being NULL*/

	while (temp->next)
		temp = temp->next;

	/* set the 'next' pointer of the current last node 'temp' to point to newNode*/
	/* this effectively adds the new node at the end of the list*/

	temp->next = newNode;

	return (newNode);
}

