#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - function to print alphabet in lower case
  * Description: 'function prototype and header file'
  * return: always 0
  */
void print_alphabet_x10(void)
{
	int b;
	int n;

	for (b = 0; b < 10; b++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
