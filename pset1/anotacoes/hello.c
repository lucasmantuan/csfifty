#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Solicita o nome do usuário
    string answer = get_string("Qual é o seu nome? ");
    printf("Olá, %s\n", answer);
}