#include "main.h"
/**
* print_last_digit - function to print last digit
* @a: parameter to print
* Return: b
*/

int print_last_digit(int a)
{
int b;

b = a % 10;
if (a < 0)
b = -b;
_putchar(b + '0');
return (b);
}
