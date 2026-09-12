//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n,w, sum=1;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n>0)
    {
        w=n%10;
        n=n/10;
        if(w%2==1)
        {
            sum=sum*w;
        }
    }
    printf("%d", sum);
}