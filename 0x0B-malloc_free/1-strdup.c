#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string
  * Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	char *str2;

	str2 = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (str2 == NULL)
	{
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);
}
