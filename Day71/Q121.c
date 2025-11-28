/*Q121 Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.*/

#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}