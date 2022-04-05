#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  int inicial = 10;
  int final = 20;
  int anos;

  for (int i = 0; i < 10; i++)
  {
    printf(i);
  }

  float nascimentos = trunc(inicial / 3);
  float mortes = trunc(inicial / 4);

  inicial = inicial + (int) nascimentos - (int) mortes;
  printf("%i\n", inicial);
}