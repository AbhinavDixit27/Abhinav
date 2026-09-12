//Q35: Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int x=1; x<=n; x++)
    {
        if(n%x==0)
        {
            printf("%d", x);
        }
    }
}