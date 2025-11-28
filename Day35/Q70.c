//Q70 Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k (number of rotations): ");
    scanf("%d", &k);

    k = k % n;
    for(int r = 0; r < k; r++) {
        int last = arr[n - 1];
        for(i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}