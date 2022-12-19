#include "main.h"

/**
 * _strcpy - copied the spring pointed to the scr
 * @dest: destination
 * @src: sorce
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
