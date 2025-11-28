//Q96 Reverse each word in a sentence without changing the word order. 

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end, j;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while(str[i] != '\0') {

        start = i;

        while(str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        end = i - 1;

        for(j = start; j < end; j++, end--) {
            char temp = str[j];
            str[j] = str[end];
            str[end] = temp;
        }

        if(str[i] != '\0') i++;
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}