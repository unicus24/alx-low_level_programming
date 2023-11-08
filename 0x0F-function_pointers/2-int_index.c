#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array
 * @size: size fo the elements in the array
 * @cmp: pointer to the function to be used to compare values
 * return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

