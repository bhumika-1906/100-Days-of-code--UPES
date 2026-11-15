#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, max = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s[3], top;
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = findTopStudent(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll_no, top.marks);

    return 0;
}