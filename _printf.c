#include "main.h"

/**
 * _printf - a typical printf function
 *
 * @format: string with contains a format of print
 *
 * Return: count of bits printed
 */

int _printf(const char *format, ...)
{
	unsigned int n = 0, r = 0, i;
	va_list pr;
	char flag[2];
	char jump = '\n';

	va_start(pr, format);

	while (format && format[n])
	{
		if (format[n] != '%')
		{
			write(1, &format[n], 1);
			n++;
		}
		else
		{
			i = 0;
			while (i != 1 && format[n + 1] != '\0')
			{
				flag[i] = format[n + 1];
				i++, n++;
			}
			flag[1] = '\0';
			r += (get_flag(flag)(pr)) - 2;
			n++;
		}
	}

	va_end(pr);
	write(1, &jump, 1);
	return (n + r);
}

/**
 * get_flag - this function get the flag passed by argument
 *			and call the indicated function
 *
 * @flag: flag passed
 *
 * Return: count of bits printed by indicated function
 */

int (*get_flag(char *flag))(va_list)
{
	int i = 0;
	prt_t options[] = {
		{"c", prt_char},
		{"s", prt_string},
		{"%", prt_percent},
		{NULL, NULL}
	};

	while (i < 4 && *(options[i].fl) != *flag)
		i++;

	return (options[i].f);
}
