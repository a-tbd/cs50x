#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    printf("minutes: ");
    int min = GetInt();
    
    printf("bottles: %d\n", min*12);
}
