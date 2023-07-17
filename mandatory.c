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
 * prt_decimal - print number with a decimal format
 *
 * @pr: addres from argument to print
 *
 * Return: count of chars printed
 */

int prt_decimal(va_list pr)
{
	return (0);
}

/**
 * get_lenght - aux function to get lenght of unsigned integer
 *
 * @num: num to get lenght
 *
 * Return: return a lenght of function
 */

int get_lenght(int num)
{
	int n = ((num < 0) ? (-(num)) : (num));
	int r, con = 0;

	while (n > 0 && r != 0)
	{
		r = n % 10;
		con++;
		n = n / 10;
	}
	return (con);
}
