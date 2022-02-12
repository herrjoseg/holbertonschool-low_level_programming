#include <stdio.h>

/**
* main - Imprime el alfabeto
* Return: Always 0
*/

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar (n);
}
for (n = 97; n <= 102; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
