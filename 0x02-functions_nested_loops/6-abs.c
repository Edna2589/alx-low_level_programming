#include "main.h"
/**
 * _abs - Compute the absolute value of an integer.
 * @c: number to be computed
 *
 * Return: Absolute value of the number or zero
 */
int _abs(int c)
{
if (c < 0)
{
int _abs_val;
_abs_val = c * -1;
return (_abs_val);
}
return (c);
}
