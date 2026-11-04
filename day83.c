/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    char month[10];

    scanf("%s", month);

    if (month[0] == 'J' && month[1] == 'A')
        m = JAN;
    else if (month[0] == 'F')
        m = FEB;
    else if (month[0] == 'M' && month[2] == 'R')
        m = MAR;
    else if (month[0] == 'A' && month[1] == 'P')
        m = APR;
    else if (month[0] == 'M')
        m = MAY;
    else if (month[0] == 'J' && month[2] == 'N')
        m = JUN;
    else if (month[0] == 'J' && month[2] == 'L')
        m = JUL;
    else if (month[0] == 'A')
        m = AUG;
    else if (month[0] == 'S')
        m = SEP;
    else if (month[0] == 'O')
        m = OCT;
    else if (month[0] == 'N')
        m = NOV;
    else if (month[0] == 'D')
        m = DEC;
    else {
        printf("Invalid month");
        return 0;
    }

    switch (m) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
            printf("31 days");
            break;

        case APR: case JUN: case SEP: case NOV:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;
    }

    return 0;
}