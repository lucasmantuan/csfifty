#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 8;
//    for (int j = 0; j < n; j++)
//    {
        for (int i = 0; i < n; i++)
        {
            printf(".");
            n--;
        }
        printf("#");
        printf("\n");
//    }
}