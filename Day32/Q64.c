//Q64 Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int maxFreq = freq[0];
    int maxDigit = 0;

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxFreq);

    return 0;
}