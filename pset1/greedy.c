#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int coins = 0;
    
    float i;
    do
    {
        printf("How much change is owed? ");
        i = GetFloat();
    }
    while (i<=0);
    
    int c;
    c = round(i*100);
    
    while (c-25 >= 0)
    {
        c = c-25;
        coins++;
    } 
    
    while (c-10 >= 0)
    {
        c = c-10;
        coins++;
    }
    
    while (c-5 >= 0)
    {
        c = c-5;
        coins++;
    }
    
    while (c-1 >= 0)
    {
        c--;
        coins++;
    }
    
    printf("%d\n", coins);
    
}
