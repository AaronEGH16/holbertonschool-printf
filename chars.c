#include "main.h"

/**
 * prt_char - print a single char
 *
 * @pr: location of char
 *
 * Return: count of bits printed
 */

int prt_char(va_list pr)
{
	char chr = (char)va_arg(pr, int);

	write(1, &chr, 1);
	return (1);
}

/**
 * prt_string - print a array of chars
 *
 * @pr: location of argument to print
 *
 * Return: count of bits printed
 */

int prt_string(va_list pr)
{
	char *str = va_arg(pr, char *);
	int i = 0;

	if (str == NULL)
		return (-1);

	while (str[i] && str != NULL)
	{
		write(1, &str[i++], 1);
	}
	return (i);
}
