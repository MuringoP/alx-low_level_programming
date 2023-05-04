#include "main.h"

/**
 * flip_bits - counts the no of bits to change
 * @n: first no
 * @m: second no
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = exclusive >> b;
		if (current & 1)
			count++;
	}

	return (count);
}
