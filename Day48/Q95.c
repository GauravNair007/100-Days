//Q95 Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, j, flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;

    if(len1 != len2) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        flag = 1;
        for(j = 0; j < len1; j++) {
            if(str1[j] != str2[(i + j) % len1]) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) break;
    }

    if(flag)
        printf("Second string is a rotation of the first.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}