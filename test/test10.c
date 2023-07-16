#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	printf("testing printf('%'):\n");
	x = printf("%");
	y = _printf("%");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
