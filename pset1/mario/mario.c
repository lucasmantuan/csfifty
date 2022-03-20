#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 8;
    int k = 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < k; i++)
        {
            printf("#");
        }
        k++;
        printf("\n");
    }
}