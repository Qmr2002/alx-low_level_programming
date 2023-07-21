#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, j;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (j = size - hash; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < hash; j++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
