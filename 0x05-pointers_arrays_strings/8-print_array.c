#include "main.h"
/**
  * print_array - Prints contents of array
  * @a: pointer
  * @n: integer
  */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
