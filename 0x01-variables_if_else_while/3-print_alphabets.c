#include <stdio.h>

/**
 * main - prnin in lower and higer case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A' <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
