```cpp
/*
Q100: Print all sub-strings of a string.

Sample Test Case:
Input:
abc

Output:
a,ab,abc,b,bc,c
*/

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool first = true;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            if (!first) {
                cout << ",";
            }

            for (int k = i; k <= j; k++) {
                cout << str[k];
            }

            first = false;
        }
    }

    return 0;
}
```