/*Q50 Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 5; i >= 1; i--) {

        for (spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
