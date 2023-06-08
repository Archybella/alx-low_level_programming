#include "main.h"

/**
* get_endianness - finds the endiannes of the arch
* Description: finds the endiannes of the arch
* section header: the header of this function is holberton.h
* Return: 1 for little indian - 0 for big indian.
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
