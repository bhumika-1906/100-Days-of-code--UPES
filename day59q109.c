/*
Q109: Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.

Sample Test Cases:

Input 1:
arr = [100, 200, 300, 400], k = 2
Output 1:
700

Input 2:
arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39

Input 3:
arr = [100, 200, 300, 400], k = 1
Output 3:
400
*/

#include <stdio.h>

int main() {
    int n, k, arr[100];
    int sum = 0, maxSum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for (int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}