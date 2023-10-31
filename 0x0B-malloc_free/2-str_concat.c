#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: NULL on failure or pointer to new allocted space.
  */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		new_str[concat_index++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		new_str[concat_index++] = s2[index];
	}
	return (new_str);
}
