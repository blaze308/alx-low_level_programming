#include "main.h"
/**
* _print_sign - function to print sign
* @n: parameter to check
* Return: 1, 0 and -1 based on condition
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}
