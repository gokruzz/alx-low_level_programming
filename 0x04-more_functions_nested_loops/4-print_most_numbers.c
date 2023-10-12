#include "main.h"
/**
  * print_most_numbers - print 0 to 9 except 2 and 4
  * Description: most numbers
  * Return: void
  */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
