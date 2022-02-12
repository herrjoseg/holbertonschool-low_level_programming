#include <stdio.h>

/**
* main - Imprime combinacion de tres digitos
* Return: Always 0
*/

int main(void)
{
int n;
int m;
int o;
for (n = 48; n <= 57; n++)
{
for (m = n + 1; m <= 57; m++)
{
for (o = m + 1; o <= 57; o++)
{
putchar (n);
putchar (m);
putchar (o);
if (n == 56 && m == 58 && o == 57)
continue;
putchar (44);
putchar (32);
}
}
}

putchar ('\n');
return (0);
}
