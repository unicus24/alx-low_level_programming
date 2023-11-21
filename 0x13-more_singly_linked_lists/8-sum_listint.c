#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: the first node in the linked list
 *
 * Return: sum of all data of linked list
 */

int sum_listint(listint_t *head)
{
	int sumNum = 0;
	listint_t *tempPointer = head;

	while (tempPointer)
	{
		sumNum += tempPointer->n;
		tempPointer = tempPointer->next;
	}

	return (sumNum);

}


