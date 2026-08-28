/*
Question:
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int num1 = a;
    int num2 = b;

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int hcf = num1;
    long long lcm = ((long long)a * b) / hcf;

    printf("%lld\n", lcm);

    return 0;
}