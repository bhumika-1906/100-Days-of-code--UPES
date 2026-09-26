Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
```c
/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0, end;

    fgets(str, 100, stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\n' || str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}