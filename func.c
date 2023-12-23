#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

bool valid_triangle(int a, int b, int c);

int main()
{
    bool multiply = valid_triangle(1,11,9);
    printf(" %d", multiply);
}

bool valid_triangle(int a, int b, int c)
{
    if ((a>0 && b>0 && c>0 ) && ((a+b>c) && (a+c>b) && (c+b>a)))
    {
        return true;

    }
    else { 
        return false;
    }
}