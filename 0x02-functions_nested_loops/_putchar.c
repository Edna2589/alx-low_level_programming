#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: on sucess 1.
 * on error, -1 is retured, and errno is not appropraitely.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
