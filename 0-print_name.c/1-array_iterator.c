#include "function_pointers.h"
#include <stdlib.h>
/**
  * array_iterator - iterates an array.
  * @array: array to be executed
  * @size: size of array
  * @action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array == NULL || action == NULL)
		exit(98);
	for (idx = 0; idx < size; idx++)
		action(array[idx]);
}
