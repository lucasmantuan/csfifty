#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  int inicial = 10;
  int final = 12;
  int anos;
  float nascimentos;
  float mortes;

  do
  {
    nascimentos = trunc(inicial / 3);
    mortes = trunc(inicial / 4);
    inicial = inicial + (int) nascimentos - (int) mortes;
    anos++;
  }
  while (final < 2);

  printf("%i\n", anos);
}