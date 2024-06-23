#include "main.h"
/**
 * print_last_digit - entry point
 * Description: This function prints the alphabet, in lowercase
 * @x: entry parametr
 * main - check the code
 * Return: Always 0
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = -1 * x;
	}

	_putchar (x + '0');

	return (x);

}
