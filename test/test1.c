#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("hello world\n");
	y = _printf("hello world\n");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
