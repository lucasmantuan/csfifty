#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int
main(void)
{
    // seed do prgn
    srand(time(NULL));

    // escolhe um numero pseudo-aleatorio entre 0 e 1023
    int skittles = rand() % 1024;

    // solicita que o usuário insira um número
    printf("Olá, eu sou uma máquina de balas falante! Adivinhe quantos Skittles têm dentro de mim.\nDica: Estou pensando em um número entre 0 e 1023.\nQual é ele?\n");
    int shot = GetInt();
    
    // executa a rotina de teste do valor inserido
    int i = 0;

	while (i != 1) 
       {
           if (shot > skittles)
           {
                printf("O número que você chutou é MAIOR! Tente novamente...\n");
                shot = GetInt();
           }
           else if (shot < skittles)
           {
                printf("O número que você chutou é MENOR! Tente novamente...\n");
                shot = GetInt();
           }
           else if (shot == skittles)
           {
                printf("Parabéns, você acertou.\nO número que você chutou (%d) é igual ao número de skittlers (%d).\n", shot, skittles);
                i = 1;
           }
       }
	return(0);
}