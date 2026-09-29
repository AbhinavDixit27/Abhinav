//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, temp, power = 1, result;
    printf("Enter the number:");
    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = n - (first * power) - last + (last * power) + first;

    printf("%d", result);

    return 0;
}