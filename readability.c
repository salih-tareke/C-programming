#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int words(string x);
int letter(string y);
int sentence (string z);

int main()
{

    string word = get_string("Text: ");

    long count =  words (word);
    long let =  letter (word);
    long sent =  sentence (word);

    float l = 0.0588 * (float) let / count * 100;
    float s = 0.296 * (float) sent / count * 100;

    float index = l - s - 15.8 ;
    int grade = round(index);

    if (grade < 1)
    {
        printf("%s","Before Grade 1");
    }
    else if (grade > 16)
    {
        printf("%s","Grade 16+");
    }
    else
    {
        printf("\nGrade %i\n", grade);
    }
}

int words(string x)
{
    int w = 0;
    int n = strlen(x);
    for (int i=0; i<n ; i++)
    {
        if (x[i] == ' ' )
        {
            w++;
        }
    }
    return w+1;
}

int letter(string y)
{
    int b = 0;
    int q = strlen(y);
    for (int j=0; j<q ; j++)
    {
        if ((y[j] != ' ' ) &&  (y[j] != '.') && ( y[j] != ',') && (y[j] != '!'))
        {
            b++;
        }
    }
    return b;
}

int sentence (string z)
{
    int v = 0;
    int q = strlen(z);
    for (int j=0; j<q ; j++)
    {
        if ((z[j] == '.') || ( z[j] == ',') || (z[j] == '!'))
        {
            v++;
        }
    }
    return v;
}
