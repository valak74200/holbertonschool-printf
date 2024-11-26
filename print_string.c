#include "main.h"

/**
 * print_string - write the function
 * @args: iunput a string
 * Return: 0
 */

int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}
