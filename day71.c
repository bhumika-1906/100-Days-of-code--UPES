/*
Q121: Write a C program that creates a text file named info.txt in write mode.
Take the user's name and age as input, and write them to the file using fprintf().
Display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}