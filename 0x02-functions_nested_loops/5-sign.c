#include "main.h"

/**
 *  print_sign- prints the sign of a number.
 * @n: The character to be checked
 * Return: 1 for positive num, -1 for negative numbers or zero for anthing else
 *
 */

int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
