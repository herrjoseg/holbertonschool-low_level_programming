#include <stdio.h>

/**
* main - Imprime el alfabeto
* Return: Always 0
*/

int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar (n);
putchar (44);
putchar (32);
}
putchar ('\n');
return (0);
}
