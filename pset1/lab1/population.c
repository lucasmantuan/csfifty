#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  int inicial = 10;
  int final = 120;
  int anos = 0;
  float nascimentos;
  float mortes;

  do
  {
    nascimentos = trunc(inicial / 3);
    mortes = trunc(inicial / 4);
    inicial = inicial + (int) nascimentos - (int) mortes;
    anos++;
  }
  while (inicial < final);

  printf("%i\n", anos);
}