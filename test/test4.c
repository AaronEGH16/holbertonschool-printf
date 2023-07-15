#include "main.h"

int
main(void)
{
	int x = 0, y = 0;

	x = printf("char: %%\n", 'a');
	y = _printf("char: %%\n", 'a');
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
