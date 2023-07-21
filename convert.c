#include "main.h"

/**
 * prt_binary - get a unsigned int arg and print it in binary form
 *
 * @pr: addres from arg
 *
 * Return: number of bytes printed
 */

int prt_binary(va_list pr)
{
	unsigned int num;
	int j, i, binaryNum[32];

	num = va_arg(pr, unsigned int);
	j = 0;
	i = 0;

	if (num == 0)
	{
		num = '0';
		write(1, &num, 1);

		return (1);
	}

	while (num > 0)
	{
		binaryNum[i++] = num % 2;
		num /= 2;
	}

	for (j = (i - 1); j >= 0; j--)
		integer(binaryNum[j]);

	return (i);
}

/**
 * prt_octal - convert unsigned int to octal
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_octal(va_list pr)
{
	unsigned int num;
	int j, i, octalNum[100];

	num = va_arg(pr, unsigned int);
	j = 0;
	i = 0;

	if (num == 0)
	{
		num = '0';
		write(1, &num, 1);

		return (1);
	}

	while (num > 0)
	{
		octalNum[i++] = num % 8;
		num /= 8;
	}

	for (j = (i - 1); j >= 0; j--)
		integer(octalNum[j]);

	return (i);
}

/**
 * prt_hex - convert unsigned int to hex
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_hex(va_list pr)
{
	unsigned int num;
	int j, i, temp;
	char hexNum[100];

	num = va_arg(pr, unsigned int);
	j = 0;
	i = 0;

	if (num == 0)
	{
		num = '0';
		write(1, &num, 1);

		return (1);
	}

	while (num > 0)
	{
		temp = num % 16;

		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexNum[i++] = temp;
		num /= 16;
	}

	for (j = (i - 1); j >= 0; j--)
		write(1, &hexNum[j], 1);

	return (i);
}
