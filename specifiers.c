#include "main.h"

/**
 * specifiers - selectionne la fonction appropriee pour imprimer un argument
 * @format : Caractere de format specifiant le type d'argument a imprimer
 * Return : Pointeur vers la fonction appropriee ou NULL si non trouve
 */

int (*specifiers(const char *format))(va_list)
{
int i = 0;
print_t array[] = {
{'c', print_char},
{'s', print_string},
{'d', print_int},
{'i', print_int},
{'%', print_percent},
{'b', print_binary},
{'\0', NULL}
};
for (int i = 0; array[i].sp != NULL; i++)
{
if (array[i].sp == *format)
{
return (array[i].f);
}
}
return (NULL);
}
