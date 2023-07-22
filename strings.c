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
		str = "(null)";

	while (str[i] && str != NULL)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * prt_revstr - print string in reverse
 *
 * @pr: addres from string
 *
 * Return: count of chars printed
 */

int prt_revstr(va_list pr)
{
	char *str = va_arg(pr, char *);
	char *null = "(null)";
	int i = 0, r = 0;

	if (str == NULL)
	{
		for (; null[i] != '\0'; i++)
			write(1, &null[i], 1);
		return (i);
	}

	while (str[i] != '\0')
		i++;
	r = i;
	for (i -= 1; i >= 0; i--)
		write(1, &str[i], 1);

	return (r);
}
