#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Asigna un número RAND  a n e imprime el ultimo digito
* Return: Always 0
*/

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
n = n % 10;
if (n > 5)
printf("is %d and is greater than 5\n", n);
else if (n == 0)
printf("is %d and is 50\n", n);
else
printf("is %d and is less than 6 and not 0\n", n);
return (0);
}
