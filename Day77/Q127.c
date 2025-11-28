/*Q127 Write a program that reads text from input.txt, converts all lowercase letters to uppercase, 
and writes the result to output.txt.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    char ch;

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and saved in output.txt\n");

    return 0;
}