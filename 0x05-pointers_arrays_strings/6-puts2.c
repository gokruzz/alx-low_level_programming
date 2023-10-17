#include "main.h"
/**
  * puts2 - Prints one char out of two of a string.
  * @str: The string containing the characters.
  */

void puts2(char *str)
{
	int i = 0;
	int len = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	i = len - 1;
	for (c = 0; c <= i; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}

	_putchar('\n');
}
