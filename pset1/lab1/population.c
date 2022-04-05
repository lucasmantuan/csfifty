#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_inicio(int n);

int main(void)
{
  int inicial = get_inicio();
  int final = 20;
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

int get_inicio(int n)
{
  do
  {
    n = get_int("Start size: ");
  }
  while (n < 9);
}