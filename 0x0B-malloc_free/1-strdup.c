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

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = malloc(sizeof(char) * strlen(str));
	if (str2 == NULL)
	{
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);
}
