#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	printf("testing printf(NULL):\n");
	x = printf(NULL);
	y = _printf(NULL);
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
