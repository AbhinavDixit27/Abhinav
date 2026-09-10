//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n, fact =1;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int x=1; x<=n; x++)
    {
        fact = fact*x;
    }
    printf("%d", fact);
}