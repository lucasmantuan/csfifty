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

  for (int i = 0; i < 10; i++)
  {
    nascimentos = trunc(inicial / 3);
    mortes = trunc(inicial / 4);
    inicial = inicial + (int) nascimentos - (int) mortes;
    printf("%i\n", inicial);
  }

}