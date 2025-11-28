//Q77 Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[10][10], diag[10];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("\nDiagonal elements are DISTINCT.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}