#include "main.h"
#include <stdio.h>

/**
 * print_arrey - print n element in a arry
 * @a: array
 * @n: number of v in the printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
