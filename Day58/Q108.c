/*Q108 Write a Program to take an integer array nums. 
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}