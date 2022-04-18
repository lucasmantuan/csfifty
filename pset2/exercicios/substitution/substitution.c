#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str = "lucas";
    char ch = 'l';
    char *ret;
    int i = 1;

    ret = strchr(str, ch);

    printf("%ld\n", (ret - str));

}