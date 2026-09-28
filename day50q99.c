```cpp
/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Case:
Input:
15/04/2025

Output:
15-Apr-2025
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;
    cin >> date;

    date.replace(2, 3, "-Apr-");

    cout << date;

    return 0;
}
```