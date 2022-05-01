#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    people[0].name = "Lucas";
    people[0].number = "123-456";
    people[1].name = "Camila";
    people[1].number = "456-789";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Camila") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        printf("Not Found\n");
        return 1;
    }

}