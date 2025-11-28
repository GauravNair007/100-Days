//Q 145 Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n);

int main() {
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student arr[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Roll No: ");
        scanf("%d", &arr[i].roll_no);
        printf("Marks: ");
        scanf("%f", &arr[i].marks);
    }

    struct Student top = getTopStudent(arr, n);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

struct Student getTopStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for(int i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;
}