#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head) /* this function takes a pointer to a pointer to a 'listint_t' ('head') as its parameter */
/*the function doesnt return any value (void)*/
{
	/*declare a pointer of type listint_t*/
	/*this pointer will be used as a temporary pointer*/
	/*the temporary pointer holds the next node's addres during the freeing process*/

	listint_t *tempPointer;

	/*conditional if statement that checks if the head pointer is null*/
	/*if null, there is no list to free and the function returns earlyavoiding execution*/

	if (head == NULL)
		return;

	/*the while loop iterates through the linked list starting from the *head*/
	/*until it reachers the end of the list when the *head becomes null*/

	while (*head)
	{
		/*assign the next pointer of the current node *head to tempPointer*/
		/*storing the address of the next node*/
		tempPointer = (*head)->next;
		/*de allocate memory allocated to the *head node*/
		free(*head);
		/*update the *head pointer to point to the next node stored in tempPointer*/
		/*allows the loop to proceed to the next node*/
		*head = tempPointer;
	}

	*head = NULL;

}

