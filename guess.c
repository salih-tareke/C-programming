#include <stdio.h>
#include <cs50.h>

int main()
{
    int num = 5;
    int guess = get_int("guess anumber: ");

    while (guess != num)
    {
        printf("wrong guess");
    }
    
    printf ("correct");
}