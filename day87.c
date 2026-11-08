/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char role[20];

    scanf("%s", role);

    if (strcmp(role, "ADMIN") == 0) {
        printf("Welcome Admin!");
    }
    else if (strcmp(role, "USER") == 0) {
        printf("Welcome User!");
    }
    else if (strcmp(role, "GUEST") == 0) {
        printf("Welcome Guest!");
    }
    else {
        printf("Invalid Role");
    }

    return 0;
}