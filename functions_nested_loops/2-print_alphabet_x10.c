#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: This function prints the alphabet, in lowercase
 * main - check the code
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char letter;

	int i = 0;

	while (i <= 9)
	{
	letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}

}
