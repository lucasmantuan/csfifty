#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // guarda a chave informada pelo usuário
  char caractere;

  // vamos ler o caractere informado pelo usuário
  printf("Informe um caractere e tecle ENTER: ");
  scanf("%c", &caractere);

  // vamos verificar se o usuário informou um dígito
  // de 0 a 9
  if(isdigit(caractere))
    printf("Voce informou um digito de 0 a 9");
  else
    printf("Voce NAO informou um digito de 0 a 9");

  puts("\n\n");
  system("PAUSE");
  return 0;
}















    char *p;
    long key = strtol(argv[1], &p, 10);

    int isdigit(int key);

    // verificar os parâmetros informados
    if (argc > 2)
    {
        return printf("Usage: ./caesar key\n");
    }

    // solicita o texto para conversão
    string plaintext = get_string("plaintext: ");

    // para cada letra informada...
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // ...verifica se é uma letra e...
        if (isalpha(plaintext[i]))
        {
            // ...aplica a fórmula para conversão
            int cipherindex = ((((int) plaintext[i] - 97) + key) % 26) + 97;
            printf("%c", (char) cipherindex);
        } else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}