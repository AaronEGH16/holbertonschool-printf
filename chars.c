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
	putchar(va_arg(pr, char));
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

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * prt_percent - prints this symbol (%)
 *
 * Return: count of bits printed
 */

int prt_percent(void)
{
	putchar('%');
	return (1);
}
