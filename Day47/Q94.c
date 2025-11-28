//Q94 Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    char word[50];
    int i = 0, j = 0, maxLen = 0;
    char longest[50];

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while(1) {

        j = 0;
        while(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if(j > maxLen) {
            maxLen = j;
            int k;
            for(k = 0; k < j; k++)
                longest[k] = word[k];
            longest[k] = '\0';
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}