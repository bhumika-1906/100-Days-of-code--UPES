/*
Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    scanf("%99s", sourceFile);
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Unable to open source file");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL) {
        printf("Unable to open destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationFile);

    return 0;
}