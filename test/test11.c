#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("incomplete call flag %");
	y = _printf("incomplete call flag %");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
