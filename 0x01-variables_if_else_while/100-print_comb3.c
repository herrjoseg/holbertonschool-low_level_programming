#include <stdio.h>

/**
* main - Imprime el alfabeto
* Return: Always 0
*/

int main(void)
{
int n;
int m;
for (n = 48; n <= 57; n++)
{
for (m = n + 1; m <= 57; m++)
{
putchar (n);
putchar (m);
putchar (44);
putchar (32);
}
}

putchar ('\n');
return (0);
}
