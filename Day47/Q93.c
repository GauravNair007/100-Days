//Q93 Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]s", str2);

    i = 0;
    while(str1[i] != '\0') {
        char ch = str1[i];
        if(ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z') {
            freq1[ch - 'A']++;
        }
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        char ch = str2[i];
        if(ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z') {
            freq2[ch - 'A']++;
        }
        i++;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}