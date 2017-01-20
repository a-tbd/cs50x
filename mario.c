#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int h;
    int hash = 2;
    do
    {
        printf("height : ");
        h = GetInt();
    }
    while (h>23 || h<0);
    
    do
    {
        int space = h-1;
        int i;
        for (i=0; i<space; i++)
        {
            printf(" ");
        }
        for (i=0; i<hash; i++)
        {
            printf("#");
        }
        printf("\n");
        
        h = h-1;
        hash = hash+1;
    }
    while (h>0);
}