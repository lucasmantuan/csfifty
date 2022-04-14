#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cc50.h>

main(int argc, char *argv[])
{
    int k = atoi(argv[1]);
    int l = argc;

    if (l >= 3)
    {
        printf("Por favor, tente novamente.\n");
        return 1;
    }

    printf("Por favor, digite o texto.\n");
    string p = GetString();

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        printf("%c", p[i]);
    }

    return 0;
}