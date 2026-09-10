//Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(int x=1; x<=n; x++)
    {{
        printf("%d", x);
    }
    printf(" ");
    }
    return 0;
}