#include "main.h"

/**
 * prt_unsigned - convert int to unsigned int
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_unsigned(va_list pr)
{
	int n = va_arg(pr, int);
	unsigned int d = ((unsigned int)n);

	return (integer(d));
}

/**
 * prt_octal - convert int to octal
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_octal(va_list pr)
{
	int num;
	int j, i, binaryNum[32];

	num = va_arg(pr, int);
	j = 0;
	i = 0;

	while (num > 0)
	{
		binaryNum[i++] = num % 8;
		num /= 8;
	}

	for (j = (i - 1); j >= 0; j--)
		integer(binaryNum[j]);

	return (i);
}

/**
 * prt_hex - convert int to hex (abcdef)
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_hex(va_list pr)
{
	return (0);
}

/**
 * prt_HEX - convert int to HEX (ABCDEF)
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_HEX(va_list pr)
{
	return (0);
}
