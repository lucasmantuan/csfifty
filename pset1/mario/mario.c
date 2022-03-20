#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 8;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("#");
        }
        k++;
        printf("\n");
    }
}