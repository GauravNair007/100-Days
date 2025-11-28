/*Q109 Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    int windowSum = 0;
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);
    return 0;
}