# ifndef _MAIN_H_
# define _MAIN_H_
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
/**
 * struct prt - structure for printing
 * @fl: type to print
 * @f: function to print
*/

typedef struct prt
{
	char *fl;
	int (*f)(va_list)
} prt_t;

int _printf(const char *format, ...);
int (*get_flag(const char *format))(va_list);
int prt_char(va_list pr);
int prt_string(va_list pr);
# endif
