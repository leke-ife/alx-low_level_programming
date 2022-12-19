#include "main."

/**
 * print_rev - print a srring in reverse
 * @s: sring to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 1; i--)
		_putchar(s[i]);

	_putchar('\n');
}
