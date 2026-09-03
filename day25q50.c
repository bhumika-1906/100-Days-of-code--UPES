/*
Q50: Write a program to print the following pattern:
***
 **
  *
   **
    *

Sample Test Cases:
Input 1:

Output 1:
***
 **
  *
   **
    *

Input 2:

Output 2:

*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}