#include "main.h"

/**
 * print_char - write the function
 * @args: take a parameter.
 * Return: 0
 */

int print_char(va_list args)
{
	int count = 0;
	char c;

	c = (char)va_arg(args, int);

	count = write(1, &c, 1);
	return (count);
}
