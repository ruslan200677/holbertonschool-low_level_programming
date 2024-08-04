#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @index: index is the index, starting from 0 of the bit you want to get
 * @n: given value
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 1;

	if (index > 64)
		return (-1);

	return (bit << index & n ? 1 : 0);
}
