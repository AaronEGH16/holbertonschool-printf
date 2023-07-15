# ifndef _MAIN_H_
# define _MAIN_H_
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct prt
{
	char *fl;
	int (*f)(va_list);
} prt_t;

int _printf(const char *format, ...);
int (*get_flag(char *format))(va_list);
int prt_char(va_list pr);
int prt_string(va_list pr);
int prt_percent();
# endif
