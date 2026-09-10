//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int x = 1; x <= 2*n; x++)
    {
        if(x % 2 == 1)
        {
            sum = sum + x;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}