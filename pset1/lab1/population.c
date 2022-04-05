#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  int inicial = 10;
  int final = 20;
  int anos;

  int nascimentos;
  int mortes;

  nascimentos = inicial / 3;
  trunc(nascimentos);
  printf("%i\n", nascimentos);

  mortes = inicial / 3;
  trunc(mortes);
  printf("%i\n", mortes);
}