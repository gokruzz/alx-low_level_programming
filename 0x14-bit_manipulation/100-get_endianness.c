#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int i = 2;

	if (i & 1)
		return (0);
	else
		return (1);
}
