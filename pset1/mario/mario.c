#include <stdio.h>
#include <cs50.h>

int print_space(int n);

int main(void)
{

    print_space(3);

/*
    int l = 8;
    int m = 2;
//    for (int i = 0; i < l; i++)
//    {
        for (int j = 0; j < m; j++)
        {

            printf("#");
        }
//        m++;
            printf("\n");
//    } */
}

void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}