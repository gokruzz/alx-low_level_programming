#include "main.h"
/**
  * _strlen_recursion - function that returns the length of a string
  * @s: string
  * Return: Always zero
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}
	return (0);
}
