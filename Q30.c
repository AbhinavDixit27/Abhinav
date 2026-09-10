//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n, x, w=0;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n>0)
    {
        x=n%10;
        n=n/10;
        w= (w*10)+x;
    }
    printf("%d", w);
}