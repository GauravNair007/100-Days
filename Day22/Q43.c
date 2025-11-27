//Q43 Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;


        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}