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
	int i = 0, num = va_arg(pr, int);
	int len = get_lenght(num);
	/*char str[len];

	itoa(num, str, 10);

	while (str[i] && str != NULL)
	{
		write(1, &str[i], 1);
		i++;
	}*/
	printf("%d", len);
	return (i);
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
	int coc = 0, div = 1, con = 0;

	while (coc != 1)
	{
		con++;
		div = div * 10;
		coc = num / div;

		if (coc == 1)
			return (con + 1);
		if (coc < 1)
			return (con);
		if (num < 10)
			return (1);
	}
	return (0);
}
