#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("print a number: %i\n", 8);
	y = _printf("print a number: %i\n", 8);
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
