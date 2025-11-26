//Q31 Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    if (num == 0) {
        printf("Binary of 0 is 0\n");
        return 0;
    }

    while (num > 0) {
        int remainder = num % 2;
        binary += remainder * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary of %d = %d\n", n, binary);

    return 0;
}