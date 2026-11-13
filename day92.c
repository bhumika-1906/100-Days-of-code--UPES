
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n------ Student Details ------\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll", "Marks");

    for (i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
