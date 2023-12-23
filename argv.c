#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("Missing command line arguments. \n");
        return 1;
    }
}