#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("test a incomplete arg %c !\n");
	y = _printf("test a incomplete arg %c !\n");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
