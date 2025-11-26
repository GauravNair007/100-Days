//Q28 Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; // use long long for large numbers

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) { // loop through even numbers only
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %llu\n", n, product);

    return 0;
}