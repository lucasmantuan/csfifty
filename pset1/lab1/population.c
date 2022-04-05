#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  int inicial = 10;
  int final = 20;
  int anos;

  float nascimentos;
  float mortes;

  nascimentos = trunc(inicial / 3);
  printf("%f\n", nascimentos);

  mortes = trunc(inicial / 4);
  printf("%f\n", mortes);
}