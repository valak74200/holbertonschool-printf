#include "main.h"

/**
 * _printf - Write the function
 * @format: input the format
 * Return: printed chars
 */
int _printf(const char *format, ...)
/**
 * C'est la déclaration de la fonction _printf. 
 * Elle prend un pointeur constant vers un char (format) comme premier argument
 * suivi d'un nombre variable d'arguments (indiqué par ...).
 */
{
	int count = 0, value = 0, i = 0;
	int (*f)(va_list);
	va_list args;

/**
 * Déclaration des variables locales
 * count : compte le nombre total de caractères imprimés
 * value : stocke le nombre de caractères écrits à chaque opération
 * i : index pour parcourir la chaîne de format
 * f : pointeur vers une fonction qui prend un va_list et retourne un int
 * args : liste d'arguments variables
 */
	va_start(args, format);

/**
 * Initialise la liste d'arguments variables args.
 */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

/**
 * Vérifie si le format est NULL ou si c'est juste "%". 
 * Dans ces cas, retourne -1 (erreur).
 */
	while (format && format[i])
	{

/**
 * Boucle principale qui parcourt la chaîne de format,
 * tant qu'elle n'est pas nulle et qu'on n'a pas atteint la fin.
 */
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}

/**
 * Si le caractère actuel n'est pas '%', l'écrit directement,
 * incrémente le compteur et continue à la prochaine itération.
 */
		if (format[i] == '%')
			f = specifiers(&format[i + 1]);

/**
 * Si le caractère est '%', appelle la fonction specifiers
 * pour obtenir la fonction d'impression appropriée.
 */
		if (f)
		{
			value = f(args);
			count = count + value;
			i = i + 2;
			continue;
		}
/**
 * Si une fonction d'impression a été trouvée, 
 * l'appelle avec les arguments, 
 * met à jour le compteur et avance de deux caractères.
 */
		if (format[i + 1] == '\0')
			break;

/**
 * Si le caractère suivant est nul, sort de la boucle.
 */
		if (format[i + 1] != '\0')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i = i + 1;
			continue;
		}

/**
 * Si le caractère suivant n'est pas nul, écrit le '%' actuel et continue.
 */
	}
	va_end(args);
	return (count);
}

/**
 * Termine le traitement des arguments variables, 
 * et retourne le nombre total de caractères imprimés.
