#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'Z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
