//Q92 Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;
    char firstRepeat = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2 && firstRepeat == '\0') {
                firstRepeat = ch;
            }
        }

        i++;
    }

    if(firstRepeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}