#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes the cahracter c to stdout
 * @c: the characcter to print 
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
