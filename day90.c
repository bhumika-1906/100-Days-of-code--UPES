/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>

enum Gender {
    MALE, FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char gender[20];

    scanf("%s", gender);

    if (gender[0] == 'M')
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}