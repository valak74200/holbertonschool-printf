#include "main.h"

/**
 * print_pc - print the function
 * @args: input
 * Return: %
 */

int print_pc(va_list args)
{
	char cent = '%';
	(void) args;

	return (write(1, &cent, 1));
}
