/*Q129 A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2lf\n", average);
    }

    return 0;
}