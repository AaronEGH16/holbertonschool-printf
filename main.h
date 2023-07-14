# ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include <stdarg.h>

typedef struct prt
{
	char *flag;
	int (*f)(va_list)
} prt_t;

int _printf(const char *format, ...);
int get_flag(char *)(va_list);
int prt_char(va_list pr);
int prt_string(va_list pr);
int prt_percent();
# endif
