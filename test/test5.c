#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("more than 1 flag: %c%s%%\n", 'a', "HOLA!");
	y = _printf("more than 1 flag: %c%s%%\n", 'a', "HOLA!");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
