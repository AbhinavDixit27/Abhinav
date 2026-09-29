//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int x=1; x<n; x++)
    {
        if(n%x==0)
        {
        sum= sum+x;
    }}
    if (sum==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
}