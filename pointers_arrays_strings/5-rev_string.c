#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int l, i, t, c;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	c = l - 1;
	for (i = 0; i <= c; i++, c--)
	{
		t = s[i];
		s[i] = s[c];
		s[c] = t;
	}
}
