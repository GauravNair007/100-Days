//Q98 Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter your full name: ");
    scanf("%[^\n]s", name);

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Name with initials: ");

    for(i = 0; i <= lastSpace; i++) {
        if(i == 0 && name[i] != ' ') {
            printf("%c. ", name[i]);
        }
        if(name[i] == ' ' && name[i+1] != ' ' && i+1 <= lastSpace) {
            printf("%c. ", name[i+1]);
        }
    }

    if(lastSpace != -1) {
        printf("%s\n", &name[lastSpace + 1]);
    } else {

        printf("%s\n", name);
    }

    return 0;
}