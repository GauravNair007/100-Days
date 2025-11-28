//Q149 Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    if(s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s->name);
    printf("Roll Number: ");
    scanf("%d", &s->roll_no);
    printf("Marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}