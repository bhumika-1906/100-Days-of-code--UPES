/*
Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
#include <math.h>
int main() {
int n, first, last, digits, swapped;
if (scanf("%d", &n) != 1) {
return 0;
}
if (n < 10 && n > -10) {
printf("%d\n", n);
return 0;
}
digits = (int)log10(n);
last = n % 10;
first = n / (int)pow(10, digits);
swapped = last * (int)pow(10, digits) + (n % (int)pow(10, digits)) - last + first;
printf("%d\n", swapped);
return 0;
}