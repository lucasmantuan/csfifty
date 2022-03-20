#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int l = 8;
    int m = 2;
//    for (int i = 0; i < l; i++)
//    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l - 1; k++)
            {
                printf(".");
            }
            printf("#");
        }
//        m++;
            printf("\n");
//    }
}