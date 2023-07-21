# include "main.h"

/**
 * abs - the absolute value
 * @number: input
 * Return: value
*/
int abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * digitcounter - counter of digits
 * @number: input
 * Return: digit count
*/
int digitcounter(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (abs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}

/**
 * integer - prints an integer
 * @number: input
 * Return: digit count
*/
int integer(int number)
{
	unsigned int unint;
	int count;
	char neg = '-';
	char num;

	count = digitcounter(number);
	if (number < 0)
	{
		write(1, &neg, 1);
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);

	num = (unint % 10 + '0');

	write(1, &num, 1);

	return (count);
}

/**
 * printint - print a number
 * @pr: va_list with number to print
 * Return: number of characters
*/
int printint(va_list pr)
{
	int number = va_arg(pr, int);
	int number3;

	number3 = integer(number);

	return (number3);
}

/**
 * prt_unsigned - convert int to unsigned int
 *
 * @pr: addres from value
 *
 * Return: count of chars
 */

int prt_unsigned(va_list pr)
{
	unsigned int unint, con;
	int count;
	char num;

	unint = va_arg(pr, unsigned int);

	con = unint;

	while (con != 0)
	{
		con = con / 10;
		count++;
	}

	if (unint >= 10)
		integer(unint / 10);

	num = (unint % 10 + '0');

	write(1, &num, 1);

	return (count);
}
