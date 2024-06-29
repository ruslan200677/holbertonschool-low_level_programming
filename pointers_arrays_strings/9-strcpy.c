#include "main.h"
/**
 * _strcpy - copy a string to a buffer destination
 * @src: pointer to a string
 * @dest: buffer pointer destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
