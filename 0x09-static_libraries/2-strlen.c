#include "main.h"
/**
  * _strlen - length of a string
  * @s: parameter
  * Return: c
  */

int _strlen(char *s)
{
	int c = 0;

		while (*s++)
		{
			c++;
		}

	return (c);
}
