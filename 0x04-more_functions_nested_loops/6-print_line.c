#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
			_putchar('_');
	}

	_putchar('\n');
}
