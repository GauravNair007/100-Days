//Q41 Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, original, first, last, temp, digits = 0, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    last = num % 10;
    while (num >= 10) {
        num /= 10;
        digits++;
    }
    first = num;
    for (int i = 0; i < digits; i++) {
        multiplier *= 10;
    }

    temp = original % multiplier;
    temp = temp / 10;

    int swapped = (last * multiplier) + (temp * 10) + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}