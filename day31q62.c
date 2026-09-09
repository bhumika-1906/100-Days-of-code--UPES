/*
Question:
Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/
#include <stdio.h>
int main() {
int n;
if (scanf("%d", &n) != 1 || n <= 0) return 0;
int arr[n];
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int start = 0;
int end = n - 1;
while (start < end) {
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}