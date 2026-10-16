/*
Q114: Write a program to find the length of the longest substring without repeating characters.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0, maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = s[right];

        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }

        lastSeen[ch] = right;

        int length = right - left + 1;
        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d", maxLength);

    return 0;
}