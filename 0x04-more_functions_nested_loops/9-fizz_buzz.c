#include <stdio.h>

/**
* main - “Fizz-Buzz test”
* Return: Always 0
*/

int main(void)
{

int i, k, l;
char f[4] = "Fizz";
char b[4] = "Buzz";

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0 && (i % 5) == 0)
{
for (k = 0; k <= 3; k++)
putchar(f[k]);
for (l = 0; l <= 3; l++)
putchar(b[l]);
putchar(' ');
}
else
{
if ((i % 3) == 0)
{
for (k = 0; k <= 3; k++)
putchar(f[k]);
putchar(' ');
}
else if ((i % 5) == 0)
{
for (l = 0; l <= 3; l++)
putchar(b[l]);
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
putchar(' ');
}
return (0);
}
