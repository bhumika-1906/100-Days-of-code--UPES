/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char status[20];
    scanf("%s", status);

    if (strcmp(status, "SUCCESS") == 0)
        printf("Operation successful");
    else if (strcmp(status, "FAILURE") == 0)
        printf("Operation failed");
    else if (strcmp(status, "TIMEOUT") == 0)
        printf("Operation timed out");
    else
        printf("Invalid status");

    return 0;
}