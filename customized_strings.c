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
		return (i);
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

/**
 * prt_NPCascii - print the not printable characters
 *
 * @pr: addres of argument to print
 *
 * Return: count of chars printed
 */

int prt_NPCascii(va_list pr)
{
	char *str = va_arg(pr, char *);
	int i = 0, j = 0, r = 0, h, temp;
	unsigned long int aux;
	char hexNum[100];

	if (str == NULL)
		str = "(null)";
	while (str[i] && str != NULL)
	{
		if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			aux = str[i];
			h = 0;
			while (aux > 0)
			{
				temp = aux % 16;
				if (temp < 10)
					temp = temp + 48;
				else
					temp = temp + 55;
				hexNum[h++] = temp;
				aux /= 16;
			}
			if (hexNum[h - 2] == '\0')
			{
				write(1, "0", 1);
				r += 1;
			}
			for (j = (h - 1); j >= 0; j--)
				write(1, &hexNum[j], 1);
			i++;
			r += h + 1;
			continue;
		}
		write(1, &str[i], 1);
		i++;
	}
	return (i + r);
}
