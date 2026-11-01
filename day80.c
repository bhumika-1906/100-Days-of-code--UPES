#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n = 2;
    struct Student students_write[2] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92}
    };

    // --- STEP 1: Write records to file using fprintf() ---
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", students_write[i].name, students_write[i].roll, students_write[i].marks);
    }
    fclose(fp);

    // --- STEP 2: Read records from file using fscanf() ---
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Student temp;
    
    // Read and print formatted output until EOF
    while (fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);
    return 0;
}