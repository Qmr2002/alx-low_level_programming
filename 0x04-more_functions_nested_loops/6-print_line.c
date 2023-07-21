#include "main.h"

/**
 * print_line -print a straight line
 * @n: is The number of times the _character
 *      should be printed
 */

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
for (inchr = 1; inchr <= n; inchr++)
-putchar('_');
_putchar('\n');
	}
