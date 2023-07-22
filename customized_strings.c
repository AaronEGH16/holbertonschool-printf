#include "main.h"

/**
 * prt_addres - print addres from pointer
 *
 * @pr: addres to print
 *
 * Return: counter of chars
 */

int prt_addres(va_list pr)
{
	void *addr = va_arg(pr, void *);
	char *null = "(nil)";
	char hexNum[100];
	unsigned long int aux;
	int i = 0, j = 0, temp;

	if (addr == NULL)
	{
		for (; null[i] != '\0'; i++)
			write(1, &null[i], 1);
		return (i - 1);
	}

	aux = (unsigned long int)addr;

	write(1, "0", 1);
	write(1, "x", 1);

	while (aux > 0)
	{
		temp = aux % 16;

		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexNum[i++] = temp;
		aux /= 16;
	}

	for (j = (i - 1); j >= 0; j--)
		write(1, &hexNum[j], 1);

	return (i + 2);
}
