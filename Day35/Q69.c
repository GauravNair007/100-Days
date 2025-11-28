//Q69 Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, secondLargest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -2147483648;

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -2147483648) {
        printf("No second largest element (all elements may be equal).\n");
    }
    else {
        printf("Second largest element is: %d\n", secondLargest);
    }

    return 0;
}
