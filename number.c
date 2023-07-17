# include "main.h"

/***/
int abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/***/
int contadordigit(int number)
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

/***/
int integer(int number)
{
	unsigned int unint;
	int count;
	char neg = '-';

	count = contadordigit(number);
	if (number < 0)
	{
		write(1, &neg, 1);
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	putchar(unint % 10 + '0');

	return (count);
}

/***/
int printint(va_list pr)
{
	int number = va_arg(pr, int);
	int numero;

	numero = integer(number);

	return (numero);
}
