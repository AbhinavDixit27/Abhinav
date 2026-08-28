//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius;
    float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}