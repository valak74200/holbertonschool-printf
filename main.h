#ifndef PRINTF_H
#define PRINTF_H

/*FLAGS OF FUNCTIONS */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - struct print_t
 * @sp: the format.
 * @f: the function asscociated.
 */
typedef struct print
{
	char *sp;
	int (*f)(va_list);
} print_t;

/*****FUNCTIONS****/
/* The prototype for all functions */

int _printf(const char *format, ...);
int (*specifiers(const char *format))(va_list);
int print_char(va_list args);
int print_pc(va_list args);
int print_string(va_list args);
int print_int(va_list args);

#endif
