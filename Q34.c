//Q34: Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int x=2; x<n; x++)
    {
        if(n%x==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}