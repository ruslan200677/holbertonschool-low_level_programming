#include "main.h"

/**
 * print_alphabet - entry point
 * Description: This function prints the alphabet, in lowercase
 * main - check the code
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
}
