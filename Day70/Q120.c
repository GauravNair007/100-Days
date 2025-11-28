/*Q120 Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    if (len > 0) {

        str[0] = toupper(str[0]);

        for (int i = 1; i < len; i++) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}