#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the first element of the linked list
 *
 * Return: the data inside the element deleted
 */

int pop_listint(listint_t **head) /*takes a pointer to a pointer to a 'listint_t' (head) as its parameter*/
/*the function indicates it will return an integer*/
{
	/*declare two variables of type listint_t and type int*/
	/*nodeNum will store data of the deleted node*/
	listint_t *tempPointer;
	int nodeNum;

	/*the if conditional statement checks if the head or *head is NULL*/
	/*NULL indicates an empty list*/
	if (!head || !*head)
		return (0);


	nodeNum = (*head)->n; /*retrieves the data n from the head node and stores in nodeNum*/
	tempPointer = (*head)->next; /*stores the pointer to the next node in tempPointer*/
	free(*head);
	*head = tempPointer; /*updates the head pointer to point to the next node stored in tempPointer*/

	return (nodeNum);

}

