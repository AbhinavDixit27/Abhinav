//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>
int main()
{
    int units, amt;
    printf("Enter units consumed: ");
    scanf("%d", &units);
     if (units <= 100)
    {
        amt = units * 5;
        printf("Bill amount is %d", amt);
    }
    else if (units <= 200)
    {
        amt = (100 * 5) + ((units - 100) * 7);
        printf("Bill amount is %d", amt);
    }
    else if(units <=300)
    {
        amt = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Bill amount is %d", amt);
    }
    else
    {
        amt = (100 * 5) + (100 * 7) + (100*10) + ((units - 300) * 10);
        printf("Bill amount is %d", amt);
    }

    return 0;
}