/*
Question:
Q64: Find the digit that occurs the most times in an integer number. If multiple digits have the same maximum frequency, output the smallest digit.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
#include <string.h>
int main() {
char num[100];
if (scanf("%s", num) != 1) return 0;
int freq[10] = {0};
for (int i = 0; num[i] != '\0'; i++) {
if (num[i] >= '0' && num[i] <= '9') {
freq[num[i] - '0']++;
}
}
int max_digit = 0;
int max_freq = freq[0];
for (int i = 1; i < 10; i++) {
if (freq[i] > max_freq) {
max_freq = freq[i];
max_digit = i;
}
}
printf("%d\n", max_digit);
return 0;
}