#include <stdio.h>

/**
 * main - print single number in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	purchar('\n');

	return (0);
}
