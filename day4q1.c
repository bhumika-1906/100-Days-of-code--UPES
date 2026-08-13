#include<stdio.h>
int main()
/*Q7: Write a program to swap two numbers without using a third variable.
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/{
int a,b;
printf("enter the two numbers a,b:",a,b);
scanf("%d,%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}   