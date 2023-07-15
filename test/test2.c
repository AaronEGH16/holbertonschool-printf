#include "main.h"

int
main(void)
{
	int x = 0, y = 0;

	x = printf("char: %c\n", 'a');
	y = _printf("char: %c\n", 'a');
	printf("clasic: %d , new: %d\n", x, y);

	return (0);
}
