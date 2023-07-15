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
	char *flag;

	va_start(pr, format);

	while (format && format[n] != '\0')
	{
		if (format[n] != '%')
		{
			putchar(format[n]); /*debe de cambiarse por write*/
		}
		else
		{
			i = 0;
			while (format[n] != "" || format[n] != '\0')
			{
				flag[i] = format[n];
				i++, n++;
			}
			n--;
			r += get_flag(flag)(pr);
		}
		n++, r += n;
	}

	va_end(pr);
	putchar('\n');
	return (r);
}

/**
 * get_flag - this function get the flag passed by argument
 *			and call the indicated function
 *
 * @flag: flag passed
 * @pr: location of argument to print
 *
 * Return: count of bits printed by indicated function
 */

int get_flag(char *flag)(va_list pr)
{
	int i = 0;
	prt_t options[] = {
		{"%c", prt_char},
		{"%s", prt_string},
		{"%%", prt_percent},
		{'\0', NULL}
	};

	while (option[i].fl != '\0' && option[i].fl != flag)
		i++;

	return (option[i].f(pr));
}
