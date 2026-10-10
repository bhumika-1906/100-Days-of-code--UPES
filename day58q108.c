
/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]
*/

#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* answer = (int*)malloc(numsSize * sizeof(int));
    
    // Step 1: Calculate left products for each element
    int left_product = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = left_product;
        left_product *= nums[i];
    }
    
    // Step 2: Calculate right products and multiply with the existing left products
    int right_product = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }
    
    return answer;
}

int main() {
    // Test Case 1
    int nums1[] = {1, 2, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    int* ans1 = productExceptSelf(nums1, size1, &returnSize1);
    
    printf("Input 1: [1,2,3,4]\nOutput 1: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d%s", ans1[i], (i == returnSize1 - 1) ? "" : ",");
    }
    printf("]\n");
    free(ans1);
    
    // Test Case 2
    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    int* ans2 = productExceptSelf(nums2, size2, &returnSize2);
    
    printf("Input 2: [-1,1,0,-3,3]\nOutput 2: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d%s", ans2[i], (i == returnSize2 - 1) ? "" : ",");
    }
    printf("]\n");
    free(ans2);
    
    return 0;
}