#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    /* Store the product of all elements to the left of each index. */
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    /* Multiply by the product of all elements to the right. */
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", answer[i]);
    }
    printf("]\n");

    return 0;
}
