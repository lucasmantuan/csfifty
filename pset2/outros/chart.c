#include <cc50.h>
#include <stdio.h>

int main(void)
{
    // solicita dos usuário os valores
    printf("Digite a quantidade de M procurando F:\n");
    int i = GetInt();
    
    printf("Digite a quantidade de F procurando M:\n");
    int j = GetInt();
    
    printf("Digite a quantidade de F procurando F:\n");
    int k = GetInt();
    
    printf("Digite a quantidade de M procurando M:\n");
    int l = GetInt();

    int total = i + j + k + l;
    printf("%d\n", total);

    // converte os valores digitados em percentual
    int ip = (i * 100) / total;
    int jp = (j * 100) / total;
    int kp = (k * 100) / total;
    int lp = (l * 100) / total;
    
    int contador;
  
    printf("Quantidade de M procurando F:\n");
    for(contador = 0; contador <= ip; contador++)
    {
        printf("#");
    }

    printf("\nQuantidade de F procurando M:\n");
    for(contador = 0; contador <= jp; contador++)
    {
        printf("#");
    }
    
    printf("\nQuantidade de F procurando F:\n");
    for(contador = 0; contador <= kp; contador++)
    {
        printf("#");
    }

    printf("\nQuantidade de M procurando M:\n");
    for(contador = 0; contador <= lp; contador++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}