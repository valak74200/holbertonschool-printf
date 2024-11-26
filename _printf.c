#include "main.h"

/**
 * _printf - Write the function
 * @format: input the format
 * Return: printed chars
 */
int _printf(const char *format, ...) {
	int count = 0, value = 0, i = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && format[i]) {
		if (format[i] != '%') {
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue; }
		if (format[i] == '%')
			f = specifiers(&format[i + 1]);

		if (f) {
			value = f(args);
			count = count + value;
			i = i + 2;
			continue; }
		if (format[i + 1] == '\0')
			break;

		if (format[i + 1] != '\0') {
			value = write(1, &format[i], 1);
			count = count + value;
			i = i + 1;
			continue; } }
	va_end(args);
	return (count); }
