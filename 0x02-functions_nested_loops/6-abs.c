#include <stdio.h>
#include "main.h"
/**
  * _abs - checks for lowercase characters
  * @a: parameter to be cahecked
  * Return: -a or a
  */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
