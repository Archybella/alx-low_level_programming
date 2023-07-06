#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary- prints the binary rep of a number
 * @n: int to consider
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int j;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}

	if (j == 0)
		_putchar('0');
}
