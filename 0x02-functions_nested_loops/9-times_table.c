#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*/

void times_table(void)
{
int f;
int c;

for (f = 0; f <= 9; f++)
{
for (c = 0; c <= 9; c++)
{
if ((c * f) >= 10)
{
_putchar((c * f) / 10 + 48);
_putchar((c * f) % 10 + 48);
if (c != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(' ');
_putchar((c * f) + 48);
if (c != 9)
{
_putchar(',');
_putchar(' ');
}
}

}
_putchar('\n');
}
}
