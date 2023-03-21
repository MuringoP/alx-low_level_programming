#include "main.h"

/**
 * _abs - Computes absolute value of an integer.
 * @c: The character to be checked
 * Return: absolute value of an number or zero
 *
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
