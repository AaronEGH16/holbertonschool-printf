#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("test a null arg %c !\n", NULL);
	y = _printf("test a null arg %c !\n", NULL);
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
