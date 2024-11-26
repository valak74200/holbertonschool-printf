#include "main.h"

/**
 * specifiers - selectionne la fonction appropriee pour imprimer un argument
 * @format : Caractere de format specifiant le type d'argument a imprimer
 * Return : Pointeur vers la fonction appropriee ou NULL si non trouve
 */

int (*specifiers(const char *format))(va_list)

/**
 * Cette ligne déclare une fonction nommée specifiers qui prend un seul argument,
 * format, qui est un pointeur vers un caractère constant (const char *).
 * La fonction retourne un pointeur vers une fonction
 * qui prend un va_list comme argument et retourne un int.
 */
	int i;

/**
 * Une variable i est déclarée et initialisée à 0.
 * Cette variable sera utilisée comme index pour l'itération.
 */
static const print_t array[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_pc},
		{NULL, NULL}
	};

/**
 * Un tableau de structures print_t nommé array est initialisé. 
 * Chaque élément de ce tableau se compose de
 * Une chaîne représentant un spécificateur de format
 * Un pointeur de fonction correspondant
 * qui gère l'impression pour ce spécificateur.
 * Le dernier élément du tableau est {'\0', NULL}
 * qui agit comme une valeur sentinelle indiquant la fin du tableau.
 */

	for (i = 0; array[i].sp != NULL; i++)
{

/**
 * C'est une boucle qui itère sur chaque élément du array.
 * La boucle continue jusqu'à ce qu'elle rencontre un élément où le sp
 * (spécificateur) est NULL, ce qui indique la fin du tableau.
 */

	if (*(array[i].sp) == *format)
		{


/**
 * À l'intérieur de la boucle, cette condition 
 * vérifie si le premier caractère du spécificateur actuel 
 * (array[i].sp) correspond au premier caractère pointé par format.
 */
			return (array[i].f);

/**
 * Si une correspondance est trouvée
 * la fonction retourne le pointeur de fonction associé à ce spécificateur
 * (array[i].f). Ce pointeur de fonction peut être utilisé pour
 * gérer l'impression pour ce spécificateur de format spécifique.
 */
		}
	}
	return (NULL);

/**
 * Si aucun spécificateur correspondant n'est trouvé
 * après avoir parcouru tout le tableau, la fonction retourne NULL.
 * Cela indique qu'il n'y a pas de fonction appropriée
 * pour gérer le spécificateur de format donné.
 */
}
