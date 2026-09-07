//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    double cp, sp, perc;
    printf("Enter cost price:");
    scanf("%lf", &cp);
    printf("Enter selling price:");
    scanf("%lf", &sp);
    if(cp>sp)
    {
        perc = ((cp-sp)/cp)*100;
        printf("Loss %lf", perc);
    }
    else if(sp>cp)
    {
        perc = ((sp-cp))*100;
        printf("Profit %lf", perc);
    }
    else
    {
        printf("No Profit No Loss");
    }
}