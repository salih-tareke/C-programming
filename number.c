#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name [] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    string number [] = {"0929392708", "0982777238" , "0987672132", "0989090001", "0912326789", "0900091233", "0913789832"};
    string n = get_string("Enter aname: ");
    for(int i = 0; i < 7; i++)
    {
        int s = strcasecmp( n, name[i]);
        if ( s == 0)
        {
            printf("Found Contact info:\nName: %s\nPhone Number: %s\n", name[i],number[i]);
            return 0;
        }
    }
    printf("%s Not found!! \n", n); 
    return 1;
}