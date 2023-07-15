#include "main.h"

/**
 * _printf - a typical printf function
 * @format: string with contains a format of print
 * Return: count of bits printed
 */

int _printf(const char *format, ...)
{
	va_list pr;
	int (*f)(va_list);
	unsigned int n = 0, r = 0;
	char perc = '%';

	if (format == NULL)
		return (-1);
	va_start(pr, format);
	while (format && format[n])
	{
		if (format[n] != '%')
		{
			write(1, &format[n], 1);
			n++;
			r++;
			continue;
		}
		else
		{
			if (format[n + 1] == '%')
			{
				write(1, &perc, 1);
				r++;
				n += 2;
				continue;
			}
			else
			{
				f = get_flag(&format[n + 1]);
				if (f == NULL)
					return (-1);
				n += 2;
				r += f(pr);
				continue;
			}
		}
	}
	va_end(pr);
	return (r);
}

/**
 * get_flag - this function get the flag passed by argument
 * and call the indicated function
 * @format: possible valid format specifier
 * Return: count of bits printed by indicated function
 */

int (*get_flag(const char *format))(va_list)
{
	int i = 0;
	prt_t options[] = {
		{"c", prt_char},
		{"s", prt_string},
		{NULL, NULL}
	};

	for (i = 0; options[i].fl != NULL; i++)
	{
		if (*(options[i].fl) == *format)
			break;
	}

	return (options[i].f);
}
