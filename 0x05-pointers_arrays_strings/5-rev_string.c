#include "main.h"
/**
  * rev_string - Function that reverses a string.
  * @s: The string to be modified.
  */

void rev_string(char *s)
{
	int c = 0, len = 0;
	char temp;

	while (s[c++])
	{
		len++;
	}
	for (c = len - 1; c >= len / 2; c--)
	{
		temp =s[c];
		s[c] = s[len - c - 1];
		s[len - c - 1] = temp;
	}
}
