/*Q125 Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.*/

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}