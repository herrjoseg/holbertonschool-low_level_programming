#include <stdio.h>

/**
 * main - tests
 * Return: Alway 0
 */

int main(void)
{
  int integer = 0;
  char character = '\0';
  float floats = 0.0;
  double doubles = 0.0;
  long double ldoubles = 0;
  long int linteger = 0;
  unsigned short int yearold = 0;

  printf("integer: %lu\n", sizeof(integer));
  printf("character: %lu\n", sizeof(character));
  printf("floats: %lu\n", sizeof(floats));
  printf("doubles: %lu\n", sizeof(doubles));
  printf("unsigned short integer: %lu\n", sizeof(yearOld));

  return (0);
}
