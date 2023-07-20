#include "main.h"

/**
 * _isupper - Check i c upper
 *
 * @c: input forr alphabett
 *
 * Return: 1 if its uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
