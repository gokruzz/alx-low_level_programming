#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - searches for an integer
  * @array: array to be searched
  * @size: size of array
  * @cmp: function pointer
  * Return: -1 or idx
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
		{
			return (idx);
		}
	}
	return (-1);
}
