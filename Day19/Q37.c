//Q37 Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    int lcm = (a * b) / x;

    printf("LCM = %d\n", lcm);

    return 0;
}