#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars, and inits it with a specific char
  * @size: size of byte
  * @c: char
  * Return: NULL if size = 0 or c
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
	ptr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
