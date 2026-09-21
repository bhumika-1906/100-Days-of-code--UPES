/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;
    int len = strlen(s);
    int isPal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}
