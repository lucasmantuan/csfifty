#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];

    // verifica a quantidade de argumentos
    if (argc != 2)
    {
        printf("Uso: ./substitution chave\n");
        return 1;
    }

    // verifica os caractere da chave
    if (strlen(key) != 26)
    {
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    int size = strlen(plaintext);
    char ciphertext[size];
    int character = 97;

    // percorre 26 vezes
    for (int j = 0; j < 26; j++)
    {
        // cada uma das letras de plaintext...
        for (int i = 0; i < size; i++)
        {
            printf("%i ", i);
            // primeiro verificando se é uma letra...
            if (isalpha(plaintext[i]))
            {
                // depois verificando se é maiuscula e fazendo sua conversão...
                if (isupper(plaintext[i]))
                {
                    // para então verificar qual é a letra...
                    if (tolower(plaintext[i]) == character)
                    {
                        // e fazer a substituição apropriada se for uma letra...
                        ciphertext[i] = toupper(key[0]);
                        break;
                    }
                }
                // entretanto se for minuscula, não faz sua conversão ...
                else
                {
                    //
                    if (plaintext[i] == character)
                    {
                        ciphertext[i] = tolower(key[0]);
                        break;
                    }
                }
            }
            else
            {
                // ou então manter o caractere.
                ciphertext[i] = plaintext[i];
            }
            character++;
        }
    }

    printf("%s\n", ciphertext);

    printf("ciphertext: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", ciphertext[i]);
    }
    printf("\n");

    return 0;
}