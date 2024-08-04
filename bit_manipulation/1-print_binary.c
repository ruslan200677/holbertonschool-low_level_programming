#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 1;
	int bit_position = 63;

	while (bit_position >= 0)
	{
		if (n & (bin << bit_position))

		{
			while (bit_position >= 0)

			{
				if (n & (bin << bit_position))
					_putchar('1');

				else
					_putchar('0');
				bit_position--;
			}
			return;
		}
		bit_position--;
	}
	_putchar('0');
}
