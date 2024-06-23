#include "main.h"
#include <stdio.h>
/**
 * _isalpha - entry point
 * Description: This function prints the alphabet, in lowercase
 * @c: entry parametr
 * main - check the code
 * Return: Always 0
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	printf("-");
	}

	return (0);
}
