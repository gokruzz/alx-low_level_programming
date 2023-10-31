#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguements of your program.
  * @ac: integer
  * @av: pointer to a pointer
  * Return: NULL or a pointer to a new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
		l += ac;

		s = malloc((sizeof(char) * l) + ac + 1);
		k = 0;

		if (s == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
