#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main()
{
    string password = "please";
    string phrase = get_string("Write the password: ");
    int z = 0;
    for (int i=0, n = strlen(password); n > i ; i++)
    {
        if (phrase[i] != password[i])
        {
            return 1;
        }
        else 
        {
            z++;
        }
    }
    if (z == strlen(password))
    {
        printf("Get in \n");
    }
}