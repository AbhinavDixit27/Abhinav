//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main()
{
    int n;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int x = 1; x <= n; x++)
    {
        if(x % 2 == 0)
        {
            product = product * x;
        }
    }

    printf("%d", product);

    return 0;
}