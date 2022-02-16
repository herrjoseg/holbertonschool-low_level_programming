#include "main.h"
/**
* print_sign - checks for alphabetic character.
* @c: Caracter a chek
* Return: 1 if c is a letter, lowercase or uppercase
*/

int print_sign(int c)
{

if (c >= 0)
{
return (1);
}
else if (c <= 0)
{
return (-1);
}
else
{
return (0);
}

}
