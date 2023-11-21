#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */

/*this function takes a pointer to a listint_t (head) and an unsigned integer 'index' as parameters*/
/*this function returns a pointer to a listint_t*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*declare an unsigned integer and a pointer of typre listint_t*/
	/*j is initialized to 0 while tempPointer is assigned the value of head*/
	unsigned int j = 0;
	listint_t *tempPointer = head;


	/*this while loop iterates through the linked list*/
	/*starting from the head until it reaches the desired index or end of the list*/
	while (tempPointer && j < index)
	{
		tempPointer = tempPointer->next; /*moves tempPointer to the next node in list*/
		j++; /*increments j to keep track of the number of nodes transversed*/
	}

	return (tempPointer ? tempPointer : NULL);
	/*returns either tempPointer if its not null, meaning the desired index node was found*/
	/*returns NULL if tempPointer is NULL, indicating that the index is out of range*/

}

