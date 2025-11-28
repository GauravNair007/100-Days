//Q87 Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch >= '0' && ch <= '9') {
            digits++;
        } else if(ch == ' ') {
            spaces++;
        } else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        } else {
            special++;
        }

        i++;
    }

    printf("Number of spaces = %d\n", spaces);
    printf("Number of digits = %d\n", digits);
    printf("Number of special characters = %d\n", special);

    return 0;
}