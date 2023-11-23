#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number to be flipped
 * @m: next number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int i = 0;

	a = n ^ m;

	for (i = 0; a != 0; i += 1)
		a &= (a - 1);
	return (i);
}
