/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3
Input 2:
5
Output 2:
Approximate sum: 4.4
*/
#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if (n <= 0) {
printf("Approximate sum: 0.0\n");
return 0;
}
double sum = 1.0;
for (int i = 2; i <= n; i++) {
double numerator = 2 * i - 1;
double denominator = 2 * i - 2;
sum += numerator / denominator;
}
printf("Approximate sum: %.1f\n", sum);
return 0;
}