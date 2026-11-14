#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);

    display(s);

    return 0;
}