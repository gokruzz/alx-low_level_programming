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
	int a = 0, i = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	str2 = malloc((sizeof(char) * i) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		str2[a] = str[a];
		a++;
	}

	str2[a] = '\0';
	return (str2);
}
