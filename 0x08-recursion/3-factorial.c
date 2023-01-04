#include "main.h"

/**
 * factorial - Return the factorial of a given number.
 * @n: the number to find the factorial of.
 *
 * Return: if n > 0 - the factorial of n.
 * if n < 0 - 1 to indicare an error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
