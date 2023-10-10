#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - function to print alphabet in lower case
  * Description: 'lower case'
  * Return: Always 0.
  */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
