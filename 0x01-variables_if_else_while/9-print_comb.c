#include <stdio.h>

/**
 * main - print all combiation of single numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)

		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchat('\n');
	return (0);
}
