#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    string name ;
    string number;
    string address;
}
person;

int main(void)
{
    person people [2];

    people[0].name = "Kokeb";
    people[0].number = "0921328790";
    people[0].address = "Addis Ababa";
    people[1].name = "David";
    people[1].number = "0989002111";
    people[1].address = "Nazret";

    string n = get_string("Enter aname: ");

    for(int i = 0; i < 2; i++)
    {
        int s = strcasecmp( n, people[i].name);
        if ( s == 0)
        {
            printf("Found Contact info:\nName: %s\nPhone Number: %s\nAdress: %s\n", people[i].name, people[i].number, people[i].address);
            return 0;
        }
    }


    printf("%s Not found!! \n", n); 
    return 1;
}