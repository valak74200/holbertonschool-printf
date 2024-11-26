#include "main.h"

/**
 * print_binary - function that converted to binary.
 * @args: argument passed in function _printf
 * Return: number converted
 */
int print_binary(va_list args)

/**
 * C'est la déclaration de la fonction print_binary.
 * Elle prend un va_list comme argument et retourne un int.
 */

{
	unsigned int n = va_arg(args, unsigned int);
	char binary[32];
	int i = 0, count = 0, j = 0;

/**
 * Déclaration des variables locales
 * n : récupère l'argument non signé à partir de args
 * binary : tableau pour stocker les chiffres binaires
 * i, count, j : variables de contrôle et de comptage
 */
	if (n == 0)
	{
		count += write(1, "0", 1);
		return (-1);
	}

/**
 * Si le nombre est 0, écrit "0" et retourne -1
 */
	else
	{
		while (n > 0)
		{
			binary[i++] = n % 2 + '0';
			n /= 2;
		}

/**
 * Convertit le nombre en binaire en utilisant la division successive par 2.
 * Les chiffres binaires sont stockés dans binary en ordre inverse.
 */
		for (j = i-1; j >= 0; j--)
		{
			count += write(1, &binary[j], 1);
		}
	}

/**
 * Écrit les chiffres binaires dans l'ordre correct
 * et compte le nombre de caractères écrits.
 */
	return (count);
}

/**
 * Retourne le nombre total de caractères écrits.
 */
