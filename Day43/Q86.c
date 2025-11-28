//Q86 Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0') {
        i++;
    }
    int len = i;

    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}