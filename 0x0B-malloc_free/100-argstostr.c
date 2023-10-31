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
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			l++;
			j++;
		}

		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * l) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	s[k] = '\0';
	return (s);
}
