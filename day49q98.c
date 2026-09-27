/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last = 0;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
        if (name[i] == ' ')
            last = i + 1;

    printf("%c.", name[0]);

    for (i = 1; i < last; i++)
        if (name[i] == ' ' && i + 1 < last)
            printf("%c.", name[i + 1]);

    printf(" %s", &name[last]);

    return 0;
}