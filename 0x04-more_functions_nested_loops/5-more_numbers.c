#include "main.h"
/**
  * more_numbers - print 0 to 14 ten times
  * Description: function to print more numbers
  * Return: void
  */
void more_numbers(void)
{
	int c;
	int n;

		for (c = 0; c < 10; c++)
		{
			for (n = 0; n <= 14; n++)
			{
				if (n > 9)
				{
					_putchar(n / 10 + '0');
				}
				_putchar(n % 10 + '0');
			}
			_putchar('\n');
		}
}
