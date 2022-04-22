#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string key = "vchprzgjntlskfbdqwaxeuymoi";

    if (strlen(key) != 26)
    {
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
    }

    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 97;

    // percorre 26 vezes
    for (int j = 0; j < 26; j++)
    {
        // cada uma das letras de plaintext...
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {

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
                        ciphertext[i] = toupper(key[j]);
                    }
                }
                // entretanto se for minuscula, não faz sua conversão ...
                else
                {
                    //
                    if (plaintext[i] == character)
                    {
                        ciphertext[i] = key[j];
                    }
                }
            }
            else
            {
                // ou então manter o caractere.
                ciphertext[i] = plaintext[i];
            }

        }

    character++;
    }

    printf("Ciphertext: %s\n", ciphertext);
}