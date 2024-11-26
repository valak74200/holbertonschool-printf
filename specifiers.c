#include "main.h"

/**
 * specifiers - print an argument
 * @format: Format character specifying the type of argument to print
 * Return: Pointer to the appropriate function or NULL if not found
 */
int (*specifiers(const char *format))(va_list)
{
	int i;

	static const print_t array[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_pc},
		{'\0', NULL}
	};
	for (i = 0; array[i].sp != '\0'; i++)
	{
		if (array[i].sp == *format)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}
