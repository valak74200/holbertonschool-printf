#include "main.h"

/**
 * _write - function that works like function write().
 * @c: the characters to prints
 * Return: function write.
 */

int _write(char c)
{
	return (write(1, &c, 1));
}

/**
 * recursive - function to print the integer value recursively.
 * @n: the integer value passed through the va_list arguments.
 */

void recursive(int n)
{
	unsigned int t;

	t = n;
	if (t / 10)
		recursive(t / 10);
	_write(t % 10 + '0');
}

/**
 * print_int - that recursively print each digit of an integer in reverse order
 * @args: the argument passed in function _printf
 * Return:the count variable which represents the number of characters printed
 */

int print_int(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_write('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	recursive(m);
	return (count);
}
