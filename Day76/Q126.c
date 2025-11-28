/*Q126 Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.*/

#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist!\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}