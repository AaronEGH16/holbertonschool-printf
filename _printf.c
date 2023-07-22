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
			n++, r++;
		}
		else
		{
			f = get_flag(&format[n + 1]);
			if (format[n + 1] == '%')
			{
				write(1, &perc, 1);
				r++, n += 2;
			}
			else if (f == NULL && format[n + 1] != '\0')
			{
				write(1, &perc, 1);
				r++, n++;
			}
			else
			{
				if (f == NULL)
					return (-1);
				n += 2, r += f(pr);
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
		{"d", printint},
		{"i", printint},
		{"b", prt_binary},
		{"u", prt_unsigned},
		{"o", prt_octal},
		{"x", prt_hex},
		{"X", prt_HEX},
		{"p", prt_addres},
		{"S", prt_NPCascii},
		{"r", prt_revstr},
		{NULL, NULL}
	};


	for (i = 0; options[i].fl != NULL; i++)
	{
		if (*(options[i].fl) == *format)
			break;
	}

	return (options[i].f);
}
