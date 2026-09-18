/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int m, n;
    if (scanf("%d %d", &m, &n) != 2) return 0;
    int mat[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int first = 1;
    for (int d = 0; d < m + n - 1; d++) {
        if (d % 2 == 0) {
            int r = (d < m) ? d : m - 1;
            int c = (d < m) ? 0 : d - m + 1;
            while (r >= 0 && c < n) {
                if (!first) printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r--;
                c++;
            }
        } else {
            int c = (d < n) ? d : n - 1;
            int r = (d < n) ? 0 : d - n + 1;
            while (c >= 0 && r < m) {
                if (!first) printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }
    printf("\n");
    return 0;
}
