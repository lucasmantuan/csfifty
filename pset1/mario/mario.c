#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int l = 8;
    int m = 1;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("#");

            for (int k = 0; k <0 ; k++)
            {
                printf("#");
            }
        }
        m++;
        printf("\n");
    }
}