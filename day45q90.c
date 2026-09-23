/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (scanf("%s", str) != 1) return 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
