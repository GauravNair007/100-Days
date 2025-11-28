//Q140 Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    int g;
    scanf("%d", &g);

    if (g < 0 || g > 2) {
        printf("Invalid gender selection!\n");
        return 1;
    }

    p.gender = g;

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch(p.gender) {
        case MALE: printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER: printf("OTHER\n"); break;
    }

    return 0;
}