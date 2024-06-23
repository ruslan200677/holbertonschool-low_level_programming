#include "main.h"
/**
 *main - entry point
 *
 *Return: 0 success
 */

int main(void)
{
	char b[] = "_putchar\n";

	int i = 0;

	while (b[i] != '\0')
	{
		_putchar(b[i]);
		i++;
	}

	return (0);
}
