# ifndef _MAIN_H_
# define _MAIN_H_
# include <unistd.h>
# include <limits.h>
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
	int (*f)(va_list);
} prt_t;

int _printf(const char *format, ...);
int (*get_flag(const char *format))(va_list);
int prt_char(va_list pr);
int prt_string(va_list pr);
int printint(va_list pr);
int integer(int number);
int abs(int number);
int digitcounter(int number);
int prt_binary(va_list pr);
int prt_unsigned(va_list pr);
int prt_octal(va_list pr);
int prt_hex(va_list pr);
int prt_HEX(va_list pr);
int prt_addres(va_list pr);
int prt_NPCascii(va_list pr);

int prt_revstr(va_list pr);
# endif
