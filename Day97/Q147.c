//Q147 Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[5];
    FILE *fp;
    int i;

    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    fp = fopen("employees.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(emp, sizeof(struct Employee), 5, fp);
    fclose(fp);
    printf("\nData saved successfully to employees.bin\n");

    struct Employee readEmp[5];
    fp = fopen("employees.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(readEmp, sizeof(struct Employee), 5, fp);
    fclose(fp);

    printf("\n--- Employee Records from File ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nName: %s\n", readEmp[i].name);
        printf("ID: %d\n", readEmp[i].id);
        printf("Salary: %.2f\n", readEmp[i].salary);
    }

    return 0;
}