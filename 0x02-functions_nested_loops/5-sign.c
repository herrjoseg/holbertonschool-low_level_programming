#include "main.h"
/**
* print_sign - checks for alphabetic character.
* @n: Caracter a chek
* Return: 1 if n is a greater 0, -1 if less 0, 0 = 0
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
