//Student Management System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

void addStudent();
void displayAll();
void searchStudent();
void updateStudent();
void deleteStudent();
void sortStudents();
void saveToFile();
void loadFromFile();

int main() {
    int choice;

    loadFromFile();

    while(1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Sort by Marks\n");
        printf("7. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: sortStudents(); break;
            case 7: saveToFile(); exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}

void addStudent() {
    if(count == MAX) {
        printf("\nDatabase Full!\n");
        return;
    }

    printf("\nEnter Roll number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("\nStudent Added Successfully!\n");
}

void displayAll() {
    if(count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n%-10s %-20s %-10s\n","Roll","Name","Marks");
    printf("---------------------------------------------\n");

    for(int i = 0; i < count; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

void searchStudent() {
    int r, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++) {
        if(s[i].roll == r) {
            printf("\nStudent Found\n");
            printf("Roll: %d\nName: %s\nMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found) printf("\nRecord Not Found!\n");
}

void updateStudent() {
    int r, found = 0;
    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++) {
        if(s[i].roll == r) {
            printf("\nEnter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }
    if(!found) printf("\nRecord Not Found!\n");
}

void deleteStudent() {
    int r, index = -1;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &r);

    for(int i = 0; i < count; i++) {
        if(s[i].roll == r) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        for(int i = index; i < count - 1; i++) {
            s[i] = s[i+1];
        }
        count--;
        printf("\nRecord Deleted Successfully!\n");
    } else {
        printf("\nRecord Not Found!\n");
    }
}

void sortStudents() {
    struct Student temp;

    for(int i = 0; i < count - 1; i++) {
        for(int j = i + 1; j < count; j++) {
            if(s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nSorted by marks in descending order.\n");
}

void saveToFile() {
    FILE *fp = fopen("students.txt", "w");
    for(int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %f\n", s[i].roll, s[i].name, s[i].marks);
    }
    fclose(fp);
    printf("\nData Saved Successfully!\n");
}

void loadFromFile() {
    FILE *fp = fopen("students.txt", "r");
    if(fp == NULL) return;

    while(fscanf(fp,"%d %[^\n] %f", &s[count].roll, s[count].name, &s[count].marks) != EOF) {
        count++;
    }
    fclose(fp);
}