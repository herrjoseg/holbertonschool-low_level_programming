#include <stdio.h>

/**
 * array
 * - vector
 * - puntos consecutivos en la memoria
 * - guardar valores
 */

int main(void)
{
  int array[5] = {
	1,
	2,
	3,
	4,
	5,
  };

char string[4] = {
        'h',
        'i',
        '!',
        '\0',
  };
  
  printf("position array %p\n", (void *)array);
  printf("valor indice 0 es %d\n", array[0]);
  printf("valor indice 1 es %d\n", array[1]);
  printf("valor indice 2 es %d\n", array[2]);
  printf("valor indice 3 es %d\n", array[3]);
  printf("valor indice 4 es %d\n", array[4]);
  
printf("position array %p\n", (void *)string);
  printf("valor indice 0 es %c\n", string[0]);
  printf("valor indice 1 es %c\n", string[1]);
  printf("valor indice 2 es %c\n", string[2]);
  printf("valor indice 3 es %c\n", string[3]);

  return (0);
}
