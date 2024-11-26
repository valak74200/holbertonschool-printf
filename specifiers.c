#include "main.h"

/**
 * specifiers - selectionne la fonction appropriee pour imprimer un argument
 * @format : Caractere de format specifiant le type d'argument a imprimer
 * Return : Pointeur vers la fonction appropriee ou NULL si non trouve
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
