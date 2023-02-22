#include "main.h"
/**
* _isalpha - function to check for alphabets
* @c: checked parameter
* Return: 1 if alphabet exist else 0
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
