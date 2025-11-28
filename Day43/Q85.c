//Q85 Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0') {
        i++;
    }
    int len = i;

    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}