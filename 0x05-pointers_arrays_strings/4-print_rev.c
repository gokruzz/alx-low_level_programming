#include "main.h"
/**
  * print_rev - Prints a string in reverse.
  * @s: string to be reversed.
  * Return: void
  */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
