#include "main.h"

/**
 * _stray - concatinate two strings 
 * @dest: copy to
 * @src: copy from
 * Return: pomyer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	1 = 0;
	while (dest[i] !='\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
