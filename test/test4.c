#include "main.h"
#include <stdio.h>

int
main(void)
{
	int x = 0, y = 0;

	x = printf("percent symbol: %%\n");
	y = _printf("percent symbol: %%\n");
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
