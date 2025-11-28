//Q150 Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char name[50];
};

int main() {
    struct Student s1;
    struct Student *ptr;

    ptr = &s1;

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}