#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("string: %s\n", "HELLO!");
	y = _printf("string: %s\n", "HELLO!");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
