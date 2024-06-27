#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: printed string
 */

void print_rev(char *s)
{
	int a, r, l;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	l  = a;
	for (r = l - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
