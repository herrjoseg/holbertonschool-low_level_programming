#include <stdio.h>

/**
* main - Imprime el alfabeto
* Return: Always 0
*/

int main(void)
{
int n;
for (n = 97; n < 123; n++)
{
putchar (n);
}
for (n = 65; n < 91; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
